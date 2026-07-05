//Create a class name person. From person, derive two classes named
//student and employee. Now from two classes, create a class named
//teachingAssistant. Suppose a main class has a function named display. 
// Show that amguity occurs when the display function is called from the teachingAssistant class 
// and show how would you resolve the ambiguity.

#include<iostream>
using namespace std;
class person
{
    protected:
    string name;
    person(){} //default constructor
    person(string n):name(n){} //parametrized constructor
    void display()
    {
        cout<<"Name: "<<name<<endl;
    }
    ~person(){} //destructor
};
class student: virtual public person
{
    protected:
    student(){} //default constructor
    student(string n):person(n){} //parametrized constructor
    ~student(){} //destructor
};
class employee: virtual public person
{
    protected:
    employee(){} //default constructor
    employee(string n):person(n){} //parametrized constructor
    ~employee(){} //destructor
};
class teachingAssistant: public student, public employee
{
    public:
    teachingAssistant(){} //default constructor
    teachingAssistant(string n):student(n),employee(n){} //parametrized constructor
    ~teachingAssistant(){} //destructor
};
int main()
{
    teachingAssistant *t = new teachingAssistant("Surendra Kumar Mandal");
    t->display(); // This will call the display function from teachingAssistant class
    return 0;
}