//Error Handling
#include<iostream>
using namespace std;
void divide()
{
    float x,y;
    cout<<"Enter two values: "<<endl;
    cin>>x;
    cin>>y;
    if(y==0)
    {
        throw(y);
    }
    cout<<"Result: "<<x/y<<endl;
}
int main()
{
    try
    {
        divide();
    }
    catch(float a)
    {
        cout<<"Cannot divide by Zero."<<endl;
        cout<<"You entered: "<<a<<endl;
    }
    catch(...)   //Should be placed at the end of all catch blocks otherwise it will catch all exceptions and the other catch blocks will not be executed.
    {
        cout<<"Cannot divide by Zero. Catch all exceptions."<<endl;
    }
    return 0;
}