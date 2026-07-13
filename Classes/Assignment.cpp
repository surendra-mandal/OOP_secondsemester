//Create a function name divide that divides two numbers and prints the output. Write a proper exception handling mechanism.
//1. If divide by zero
//2. If the input is not a number
#include<iostream>
using namespace std;
void divide(int a, int b)
{
    if(b==0 || 'b'<48 ||'b'>57 || 'a'<48 ||'a'>57)
    {
        throw(b);
    }
    cout<<"Result: "<<a/b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter two values: "<<endl;
    cin>>x;
    cin>>y;
    try
    {
        divide(x,y);
    }
    catch(int a)
    {
        cout<<"Cannot divide by Zero."<<endl;
        cout<<"You entered: "<<a<<endl;
    }
    catch(...)   //Should be placed at the end of all catch blocks otherwise it will catch all exceptions and the other catch blocks will not be executed.
    {
        cout<<"Cannot divide by Zero. Catch all exceptions."<<endl;
    }
}