//Create a base class Player containing member variables name, age, and number of matches played. From this, derive two classes: Bowler and Batsman.
//Bowler has a member variable for the number of wickets taken, and Batsman has member variables for the number of runs scored and centuries.
//Use appropriate member functions to represent the respective data.

#include <iostream>
using namespace std;
class Cricketer
{
    protected:
    string name;
    int age;
    int matchesPlayed;
    public:
    // Cricketer(){} //Default constructor
    Cricketer()   //Default constructor of the Base class
    {
        name="null";
        age=0;
        matchesPlayed=0;
    }
    //Cricketer(string n, int a, int m) : name(n), age(a), matchesPlayed(m) {}  //Parameterized constructor
    Cricketer(string n, int a, int m)   //Parameterized constructor
    {
        this->name=n;
        this->age=a;
        this->matchesPlayed=m;
    }
    virtual void show()=0; //Pure virtual function to make Cricketer an abstract class
    virtual ~Cricketer(){} //Destructor;
};
class Bowler: public Cricketer
{
    private:
    int wicketsTaken;
    public:
    Bowler(): Cricketer() //Default constructor
    {
        wicketsTaken=0;
    }
    Bowler(string n, int a, int m, int w): Cricketer(n, a, m) //Parameterized constructor
    {
        this->wicketsTaken=w;
    }
    void show() 
    {
        cout<<"Bowler Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Matches Played: "<<matchesPlayed<<endl;
        cout<<"Wickets Taken: "<<wicketsTaken<<endl;
    }
};
class Batsman: public Cricketer
{
    private:
    int runsScored;
    int centuries;
    public:
    Batsman(): Cricketer() //Default constructor
    {
        runsScored=0;
        centuries=0;
    }
    Batsman(string n, int a, int m, int r, int c): Cricketer(n, a, m) //Parameterized constructor
    {
        this->runsScored=r;
        this->centuries=c;
    }
    void show()
    {
        cout <<endl<<"Batsman Name:"<<name<<endl;
        cout <<"Age: "<<age<<endl;
        cout <<"Matches Played: "<<matchesPlayed<<endl;
        cout <<"Runs Scored: "<<runsScored<<endl;
        cout <<"Centuries: "<<centuries<<endl;
    }
};
int main()
{
    Cricketer *c=new Bowler("Sanjay Choman Chomu", 24, 50, 12);
    c->show();  //Statically bind to show function of base class in compile time, but virtually enforces it to check the content of the pointer at the run time thus calling right function at the un time.
    delete c;
    c=new Batsman("Mehta", 24, 50, 1200, 5);
    c->show();
    delete c;
    return 0;
}