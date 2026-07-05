//Multiple inheritance in C++
// Create a class name personalInfo that stores name and id of a person. Create another class id that 
//stores NIN and citizenship no.  Now derive a class name location that is derived from two classes definable'
//1.Only define data members in protected if required.
//2. All the base and derived classes should have display function. And, display information of base classes from derived class.
//Also create all the required functions and constructor and destructor and show that 
//base class constructor are always called before derived class and vice versa in case of destructor.

#include<iostream>
using namespace std;
class personalInfo;
class id;
class location;
class personalInfo
{
    protected:
    string name;
    long int identityNo;
    public:
    personalInfo()   //Default constructor
    {
        cout<<"Default constructor of base class personalInfo is called."<<endl;
        name="";
        identityNo=0;
    }
    personalInfo(string n, long int a):name(n), identityNo(a)   //Parametrized constructor
    {
        cout<<"Parametrized constructor of base class personalInfo is called."<<endl;
    }
    void show()
    {
        cout<<"Name: "<<name<<endl<<"Identity No.: "<<identityNo<<endl;
    }
    ~personalInfo()
    {
        cout<<"Destructor of base class personalInfo is called."<<endl;
    }

};
class id
{
    protected:
    long int citizenship, NIN; 
    public:
    id()   //Default constructor
    {
        cout<<"Default constructor of base class id is called."<<endl;
        citizenship=0;
        NIN=0;
    }
    id(long int c, long int n):citizenship(c), NIN(n)    //Parametrized constructor
    {
        cout<<"Parametrized constructor of base class id is called."<<endl;
    }
    void show()
    {
        cout<<"Citizenship No.: "<<citizenship<<endl<<"NIN: "<<NIN<<endl;
    }
    ~id()  //Destructor
    {
        cout<<"Destructor of base class id is called."<<endl;
    }
};
class location: public personalInfo, public id
{
    double longi, lati;
    public:
    location()  //Default constructor
    {
        longi=lati=0.0;
    }
    location(string name, long int identityNo, long int citjizenship, long int NIN, double x, double y):personalInfo(name, identityNo), id(citizenship, NIN),   longi(x), lati(y)   //Parametrized constructor
    {
        cout<<"Parametrized constructor of derived class location is called."<<endl;
    }
    void show()
    {
        personalInfo::show();
        id::show();
        cout<<"Longitude: "<<longi<<endl<<"Latitude: "<<lati<<endl;
    }
    ~location()  //Destructor
    {
        cout<<"Destructor of derived class location is called."<<endl;
    }
};
int main()
{
    location l("Surendra Kumar Mandal", 8289, 01332, 6758, 2788.0, 2677.0);
    l.show();
    return 0;
}