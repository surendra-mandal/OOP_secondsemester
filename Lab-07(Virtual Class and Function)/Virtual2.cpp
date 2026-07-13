//...
#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void draw()
    {
        cout<<"Drawn Successfully."<<endl;
    }
};
class circle: virtual public shape
{
    public:
    void draw()
    {
        shape::draw(); // Calling the base class draw function
        cout<<"Circle"<<endl;
    }
};
class rectangle: virtual public shape
{
    public:
    void draw()
    {
        shape::draw(); // Calling the base class draw function
        cout<<"Rectangle"<<endl;
    }
};
class triangle: public shape
{
    public:
    void draw()
    {
        shape::draw(); // Calling the base class draw function
        cout<<"Triangle"<<endl;
    }
};
int main()
{
    shape *s[3];
    s[0] = new circle();
    s[1] = new rectangle();
    s[2] = new triangle();
    for(int i=0; i<3; i++)
    {
        s[i]->draw();
    }
    return 0;
}