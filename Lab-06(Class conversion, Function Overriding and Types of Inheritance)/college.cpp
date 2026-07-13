#include<iostream>
using namespace std;
class College
{
    protected:
    string college_name;
    string college_location;
    int established_year;
    public:
    College()   //Default Constructor
    {
        college_name="null";
        college_location="null";
        established_year=0;
    }
    College(string n,string l,int e) //Parameterized Constructor
    {
        college_name=n;
        college_location=l;
        established_year=e;
    }
    virtual void display()
    {
        cout<<"College Name: "<<college_name<<endl;
        cout<<"College Location: "<<college_location<<endl;
        cout<<"Established Year: "<<established_year<<endl;
    }
    virtual ~College(){}  //Destructor
};
class Staff:public College
{
    private:
    int employee_id;
    string employee_name;
    float salary;
    string designation;
    public:
    Staff()   //Default Constructor
    {
        employee_id=0;
        employee_name="null";
        salary=0.0;
        designation="null";
    }
    Staff(string n,string l,int e,int id,string en,float s,string d):College(n,l,e) //Parameterized Constructor
    {
        employee_id=id;
        employee_name=en;
        salary=s;
        designation=d;
    }
    void display()
    {
        College::display();
        cout<<"Employee ID: "<<employee_id<<endl;
        cout<<"Employee Name: "<<employee_name<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"====================================================="<<endl;
    }
    ~Staff(){}  //Destructor
};
class Student:public College
{
    private:
    int student_id;
    string student_name;
    string faculty;
    int joined_year;
    public:
    Student()   //Default Constructor
    {
        student_id=0;
        student_name="null";
        faculty="null";
        joined_year=0;
    }
    Student(string n,string l,int e,int id,string sn,string f,int j):College(n,l,e) //Parameterized Constructor
    {
        student_id=id;
        student_name=sn;
        faculty=f;
        joined_year=j;
    }
    void display()
    {
        College::display();
        cout<<"Student ID: "<<student_id<<endl;
        cout<<"Student Name: "<<student_name<<endl;
        cout<<"Faculty: "<<faculty<<endl;
        cout<<"Joined Year: "<<joined_year<<endl;
        cout<<"====================================================="<<endl;
    }
    ~Student(){}  //Destructor
};
int main()
{
    College *c=new College;
    c=new Staff("Kantipur Engineering College","Dhapakhel, Lalitpur",1998,101,"John Doe",80000.0,"Senior Lecturer");
    c->display();
    delete c;
    c=new Student("Kantipur Engineering College","Dhapakhel, Lalitpur",1998,89,"Surendra Kumar Mandal","BCT",2082);
    c->display();
    delete c;
    return 0;
}