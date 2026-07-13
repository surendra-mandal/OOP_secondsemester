//Error Handling
#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter two values:"<<endl;
    try
    {
        cin>>x;
        cin>>y;
        if(y==0)
        {
            throw(y);
        }
        cout<<"Result: "<<x/y<<endl;
    }
    catch(float a)
    {
        cout<<"Cannot divide by Zero."<<endl;
        cout<<"You entered: "<<a<<endl;
    }
    return 0;
}