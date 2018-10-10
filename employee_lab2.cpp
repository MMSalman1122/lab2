#include <iostream>
#include<string>
using namespace std;
class Employee{
public:
    Employee()
    {
        first_name="";
        last_name="";
        salary=0;
    }
    string setfirst_name(string name)
    {
        first_name=name;
    }
    string setlast_name(string name)
    {
        last_name=name;
    }
    double setsalary(double sal)
    {   if(sal>0)
        {salary=sal;}
        else
           {salary=0.0;
        return salary;}
    }
    string getfirst_name()
    {
        return first_name;
    }
    string getlast_name()
    {
        return last_name;
    }
    double getsalary()
    {
        return salary;
    }
    //double increase()
    //{
       // salary=salary+(salary*0.1);
    //}

private:
    string first_name,last_name;
    double salary;


};

int main()
{   string name;
    double sal;
    Employee empl1;
    Employee empl2;
    cout<<"Enter the first name of employee 1 :"<<"\n";
    cin>>name;
    empl1.setfirst_name(name);
    cout<<"Enter the last name of employee 1 :"<<"\n";
    cin>>name;
    empl1.setlast_name(name);
    cout<<"Enter the salary of employee 1 :"<<"\n";
    cin>>sal;
    empl1.setsalary(sal);

    cout<<empl1.getfirst_name();
    cout<<empl1.getlast_name();
    cout<<empl1.getsalary();







    return 0;
}
