//Create a class name shape and create a function name draw which simply draws. 
//From that class derive four classes circle, triangle, rectangle and square
//Each should have a function name show shape drawn...
//Now implement the concept of virtual function to call the function of derive class using base class
//pointer and implement the concept of virtual destructor.

#include<iostream>
using namespace std;
class shape
{
    public:
    void draw()
    {
        cout<<"Shape"<<endl;
    }
    virtual void show()
    {
        cout<<"Shape drawn."<<endl;
    }
    virtual ~shape()
    {
        cout<<"Base class destructor called."<<endl;
    }
};
class circle: public shape
{
    public:
    void show()
    {
        cout<<"Circle drawn."<<endl;
    }
    ~circle()
    {
        cout<<"Derived class circle destructor called."<<endl;
    }
};
class triangle: public shape
{
    public:
    void show()
    {
        cout<<"Triangle drawn."<<endl;
    }
    ~triangle()
    {
        cout<<"Derived class triangle destructor called."<<endl;
    }
};
class rectangle: public shape
{
    public:
    void show()
    {
        cout<<"Rectangle drawn."<<endl;
    }
    ~rectangle()
    {
        cout<<"Derived class rectangle destructor called."<<endl;
    }
};
class square: public shape
{
    public:
    void show()
    {
        cout<<"Square drawn."<<endl;
    }
    ~square()
    {
        cout<<"Derived class square destructor called."<<endl;
    }
};
int main()
{
    shape *s=new shape;
    s->draw();
    s->show();
    delete s;
    s=new circle();
    s->draw();
    s->show();
    delete s;
    s=new triangle();
    s->draw();
    s->show();
    delete s;
    s=new rectangle();
    s->draw();
    s->show();
    delete s;
    s=new square();
    s->draw();
    s->show();
    delete s;
    return 0;
}
