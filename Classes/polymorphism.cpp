//Polymorphism contd...
#include<iostream>
using namespace std;
class Employee
{
    protected:
    string name;
    public:
    Employee(){}
    Employee(string name)
    {
        this->name=name;
    }
    virtual void show()
    {
        cout<<"Base: "<<name<<endl;
    }
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
class manager:public Employee
{
    int id;
    public:
    manager(){}
    manager(string x, int id):Employee(x)
    {
        this->id=id;
    }
    void show()
    {
        cout<<"ID: "<<id<<" Name: "<<Employee::name<<endl;
    }
    ~manager(){}
};
int main()
{
    Employee *e=new Employee("Don");
    e->show();
    delete e;
    e=new Developer("Sanjay Chomu", 123);
    e->show();
    delete e;
    e=new manager("Choman Chomu", 456);
    e->show();
    delete e;
}