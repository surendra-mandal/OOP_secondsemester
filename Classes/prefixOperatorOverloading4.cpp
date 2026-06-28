//Create a class name time that represents time in second, minute and hour. now overload the decremental unary
//operator both post fix and pre fix 1) using member function 2) using friend function. remember your function
//should return object using nameless object, temporary object and this pointer.

//Prefix and Postfix Unary decrement operator using friend function(temporary object)
#include<iostream>
using namespace std;
class Time
{
    int hour, minute, second;
    public:
    Time():hour(0), minute(0), second(0) {}  //Default constructor
    Time(int h, int m, int s) : hour(h), minute(m), second(s) {}  //Parameterized constructor
    void display()
    {
        cout<<hour<<":"<<minute<<":"<<second<<""<<endl;
    }
    friend Time operator--(Time& t);  // Friend function for prefix decrement
    friend Time operator--(Time& t, int);  // Friend function for postfix decrement
};
Time operator--(Time& t) 
{
    Time temp; // Creating a temporary object to hold the decremented time
    if(t.second>0) 
    {
        temp.second=--t.second;
    }
    else
    {
        temp.second=t.second=59;
        if (t.minute>0) 
        {
            temp.minute=--t.minute;
        }
        else 
        {
            temp.minute=t.minute=59;
            if (t.hour>0) 
            {
                temp.hour=--t.hour;
            }
        }
    }
    if(t.minute>0)
    {
        temp.minute=--t.minute;
    }
    else
    {
        temp.minute=t.minute=59;
        if (t.hour>0) 
        {
            temp.hour=--t.hour;
        }
    }
    temp.hour=--t.hour;
    return temp; //Returning the temporary object
}
Time operator--(Time& t, int) //Function for postfix decrement
{
    Time temp; // Creating a temporary object to hold the decremented time
    if(t.second>0) 
    {
        temp.second=--t.second;
    }
    else
    {
        temp.second=t.second=59;
        if (t.minute>0) 
        {
            temp.minute=--t.minute;
        }
        else 
        {
            temp.minute=t.minute=59;
            if (t.hour>0) 
            {
                temp.hour=--t.hour;
            }
        }
    }
    if(t.minute>0)
    {
        temp.minute=--t.minute;
    }
    else
    {
        temp.minute=t.minute=59;
        if (t.hour>0) 
        {
            temp.hour=--t.hour;
        }
    }
    temp.hour=--t.hour;
    return temp; //Returning the temporary object
}
int main()
{
    Time t1(1, 0, 0);
    cout<<"Time before decrement:"<<endl;
    t1.display();
    operator--(t1); // Prefix decrement using friend function
    cout<<"Time after prefix decrement using friend function:"<<endl;
    t1.display();
    operator--(t1, 0); // Postfix decrement using friend function
    cout<<"Time after postfix decrement using friend function:"<<endl;
    t1.display();
    return 0;
}