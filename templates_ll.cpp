#include <iostream>
using namespace std;
template <typename T>
struct link
{
    T data;
    link <T>* next;
};
template <typename T>
class linked_list
{
    link<T>* root;
    public:
    linked_list()
    {
        root=NULL;
    }
    void insert(T key)
    {
        link<T>* new_node=new link<T>;
        new_node->data=key;
        new_node->next=root;
        new_node->next=root;
        root=new_node;
    }
    void display()
    {
        link<T>* temp=root;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main()
{
    linked_list<int> ob;
    ob.insert(1);
    ob.insert(2);
    ob.insert(3);
    ob.display();

return 0;
}