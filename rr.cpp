#include<bits/stdc++.h>
using namespace std;

typedef struct process
{
    int at,bt,btt,tat,ct,wt;
    string pro_id;

}schedule;

bool compare1(schedule a,schedule b)
{
    return a.at<b.at;
}
bool findele(queue<int>qu,int i)
{
    while(!qu.empty())
    {
        if(qu.front()==i)
            return true;
        qu.pop();
    }
    return false;
}
void print(queue<int>que)
{
    while(!que.empty())
    {
        cout<<que.front()<<" ";
        que.pop();
    }
    cout<<endl;
}
int main()
{
    int i,j,time,n,TQ;
    queue<int>q;
    schedule pro[10];
    cout<<"enter no of processes : ";
    cin>>n;
    cout<<"\nenter time quantum : ";
    cin>>TQ;
    cout<<"\nenter pro_id,arrival time and burst time of processes : \n";
    for(i=0;i<n;i++)
    {
        cin>>pro[i].pro_id;
        cin>>pro[i].at;
        cin>>pro[i].bt;
        pro[i].btt=pro[i].bt;
    }

    sort(pro,pro+n,compare1);
    q.push(0);
    int procomp=0;
    time=pro[0].at;
    cout<<"\n\nprocesses in queue\n\n";
    while(procomp<n)
    {
        j=q.front();
        if(pro[j].bt<TQ)
        {
            pro[j].ct=time+pro[j].bt;
            time=time+pro[j].bt;
            pro[j].bt=0;

        }
        else
        {
            pro[j].ct=time+TQ;
            pro[j].bt-=TQ;
            time=time+TQ;
        }

        i=q.front()+1;
        while(pro[i].at<=time && i<n && pro[i].bt!=0)
        {
            if(!findele(q,i))
               q.push(i);
            i++;
        }
        print(q);
        if(pro[j].bt!=0)
            q.push(j);
        q.pop();
        procomp=0;
        for(i=0;i<n;i++)
        {
            if(pro[i].bt==0)
                procomp++;
        }
    }
    cout<<"pro_id\tat\tburst\tcomp\tTAT time\tWT\n";
    for(i=0;i<n;i++)
    {
        pro[i].tat=pro[i].ct-pro[i].at;
        pro[i].wt=pro[i].tat-pro[i].btt;
        cout<<pro[i].pro_id<<"\t"<<pro[i].at<<"\t"<<pro[i].btt<<"\t"<<pro[i].ct<<"\t "<<pro[i].tat<<"\t  "<<pro[i].wt<<endl;
    }
}
