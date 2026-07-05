//

#include<iostream>
using namespace std;
class shape
{
    public:
    void draw()
    {
        cout<<"Drawn Successfully."<<endl;
    }
};
class circle: virtual public shape
{
    public:
    void draw()
    {
        cout<<"Circle Drawn Successfully."<<endl;
    }
};
class rectangle: virtual public shape
{
    public:
    void draw()
    {
        cout<<"Rectangle Drawn Successfully."<<endl;
    }
};
class triangle: public shape
{
    public:
    void draw()
    {
        cout<<"Triangle Drawn Successfully."<<endl;
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