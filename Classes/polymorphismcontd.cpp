//Polymorphism contd...
//Upcasting and Downcasting
//For dynamic casting, class must be polymorphic i.e. class must have a virtual function and conversion should be done dynamically.

#include<iostream>
#include<typeinfo>
using namespace std;
class Employee   //This is abstract class because it has pure virtual function. We cannot create object of abstract class.
{
    protected:
    string name;
    public:
    Employee(){}
    Employee(string name)
    {
        this->name=name;
    }
    // virtual void show()
    // {
    //     cout<<"Base: "<<name<<endl;
    // }
    virtual void show()=0; // pure virtual function
    virtual ~Employee(){}
};  
class Developer: public Employee
{
    int id;
    public:
    Developer(){}
    Developer(string x, int id):Employee(x)
    {
        this->id=id;
    }
    void show()
    {
        cout<<"ID: "<<id<<" Name: "<<Employee::name<<endl;
    }
    ~Developer(){}
};
class Manager:public Employee
{
    int id;
    public:
    Manager(){}
    Manager(string x, int id):Employee(x)
    {
        this->id=id;
    }
    void show()
    {
        cout<<"ID: "<<id<<" Name: "<<Employee::name<<endl;
    }
    ~Manager(){}
};
int main()
{
    Employee *e1=new Manager("Sanjay Chomu", 456);
    Employee *e2=new Developer("Choman Chomu", 123);
    Manager *m=dynamic_cast<Manager*>(e1);
    if(m!=nullptr)
    {
        cout<<"Downcasting successful"<<endl;
        m->show();
    }
    else
    {
        cout<<"Downcasting failed"<<endl;
    }
    Developer *d=dynamic_cast<Developer*>(e1);
    if(d!=nullptr)
    {
        cout<<"Downcasting successful"<<endl;
        d->show();
    }
    else
    {
        cout<<"Downcasting failed"<<endl;
    }
    cout<<typeid(*e1).name()<<endl;
    cout<<typeid(*e2).name()<<endl;
}