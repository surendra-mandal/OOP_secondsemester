//Create two classes one represent first name and another represent second name. Use dynamic constructor to concatentate the strings.
#include<iostream>
#include<cstring>
using namespace std;
class FirstName;
class SecondName;
class FirstName
{
    private:
    char *firstName;
    public:
    FirstName() //Default constructor
    {
        int length=strlen(firstName);
        firstName=new char[length+1];
        strcpy(firstName,"");
    }
    FirstName(const char *name)  //Parametrized constructor
    {
        int length=strlen(name);
        firstName=new char[length+1];
        strcpy(firstName,name);
    }
    ~FirstName(){} //Destructor
    friend void operator+(FirstName, SecondName);
};
class SecondName
{
    private:
    char *secondName;
    public:
    SecondName()  //Default constructor
    {
        int length=strlen(secondName);
        secondName=new char[length+1];
        strcpy(secondName,"");
    }
    SecondName(const char *name) //Parametrized constructor
    {
        int length=strlen(name);
        secondName=new char[length+1];
        strcpy(secondName,name);
    }
    friend void operator+(FirstName, SecondName);
};
void operator+(FirstName f, SecondName s)
{
    int length=strlen(f.firstName)+strlen(s.secondName);
    char *fullName=new char[length+1];
    strcpy(fullName,f.firstName);
    strcat(fullName," ");
    strcat(fullName,s.secondName);
    cout<<"Full Name:"<<fullName<<endl;
}
int main()
{
    FirstName F("Surendra");
    SecondName S("Kumar");
    F+S;
    return 0;
}