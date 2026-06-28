//Create a class name time that represents time in second, minute and hour. now overload the decremental unary
//operator both post fix and pre fix 1) using member function 2) using friend function. remember your function
//should return object using nameless object, temporary object and this pointer.

//Prefix and Postfix Unary decrement operator using member function(this pointer)
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
    Time operator--(); // Member function for prefix decrement
    Time operator--(int); // Member function for postfix decrement
};
Time Time::operator--() //Function for prefix decrement
{
    if(this->second>0) 
    {
        --this->second;
    }
    else
    {
        this->second=59;
        if (this->minute>0) 
        {
            --this->minute;
        }
        else 
        {
            this->minute=59;
            if (this->hour>0) 
            {
                --this->hour;
            }
        }
    }
    if(this->minute>0)
    {
        --this->minute;
    }
    else
    {
        this->minute=59;
        if (this->hour>0) 
        {
            --this->hour;
        }
    }
    --this->hour;
    return *this; //Returning the this pointer object
}
Time Time::operator--(int) //Function for postfix decrement
{
    if(this->second>0) 
    {
        this->second--;
    }
    else
    {
        this->second=59;
        if (this->minute>0) 
        {
            this->minute--;
        }
        else 
        {
            this->minute=59;
            if (this->hour>0) 
            {
                this->hour--;
            }
        }
    }
    if(this->minute>0)
    {
        this->minute--;
    }
    else
    {
        this->minute=59;
        if (this->hour>0) 
        {
            this->hour--;
        }
    }
    this->hour--;
    return *this; //Returning the this pointer object
}
int main()
{
    Time t1(1, 0, 0);
    cout<<"Time before decrement:"<<endl;
    t1.display();
    t1.operator--(); // Prefix decrement using member function
    cout<<"Time after prefix decrement using member function:"<<endl;
    t1.display();
    t1.operator--(0); // Postfix decrement using member function
    cout<<"Time after postfix decrement using member function:"<<endl;
    t1.display();
    return 0;
}