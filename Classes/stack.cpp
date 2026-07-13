#include<iostream>
using namespace std;
class stack 
{
    int arr[5];
    int top;
    public:
    class empty{};
    class full{};
    stack()
    {
        top=-1;
    }
    void push(int a)
    {
        if(top>=4)
        {
            throw full();
        }
        arr[++top]=a;
    }
    int pop()
    {
        if(top<0)
        {
            throw empty();
        }
        return arr[top--];
    }
    ~stack(){}
};
int main()
{
    stack s1;
    try
    {
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    //s1.push(60);
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    }
    catch(stack::empty e)
    {
        cout<<"Stack is empty."<<endl;
    }
    catch(stack::full e)
    {
        cout<<"Stack is full."<<endl;
    }
    return 0;
}