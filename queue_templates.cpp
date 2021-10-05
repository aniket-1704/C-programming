#include <iostream>
using namespace std;
template <typename T>
class queue
{
    int front, rear;
    T *ptr;
    int size;

public:
    queue(int s)
    {
        front = -1;
        rear = -1;
        size = s;
    }
    void add(T data)
    {
        if (rear == size - 1)
        {
            cout << "overflow";
        }
        else if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            ptr[rear]=data;
        }
        else
        {
            rear=(rear+1)%size;
            ptr[rear]=data;
        }  
    }
    void display()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<ptr[i]<<" ";
        }
        cout<<endl;
    }
    void delete1();
};
template <typename T>
void queue<T>::delete1()
{
    if(front==-1)
    {
        cout<<"underflw";return;
    }
    cout<<"item deleted is "<<ptr[front];
    front=(front+1)%size;
}
int main()
{
    queue<int> q(5);
    q.add(1);
    q.add(2);
    q.add(3);
    q.add(4);
    q.display();
    q.delete1();
    q.display();

    return 0;
}