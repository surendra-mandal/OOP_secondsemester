#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal makes a sound."<<endl;
    }
    virtual ~animal()
    {
        cout<<"Base class destructor."<<endl;
    }
};
class dog: public animal
{
    public:
    void sound()
    {
        cout<<"Dog barks."<<endl;
    }
    ~dog()
    {
        cout<<"Derived class dog destructor."<<endl;
    }
};
class cat: public animal
{
    public:
    void sound()
    {
        cout<<"Cat Meows."<<endl;
    }
    cat()
    {
        cout<<"Derived class cat destructor."<<endl;
    }
};
int main()
{
    animal *a;
    a=new animal;
    a->sound();   //Static binding
    delete a;
    // dog d;
    // a=&d;
    //OR
    a=new dog;
    a->sound(); //Static binding unless virtual function is used in base class
    delete a;
    a=new cat;
    a->sound(); //Static binding unless virtual function is used in base class.
    delete a;
    return 0;
}