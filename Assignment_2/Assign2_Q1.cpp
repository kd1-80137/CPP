#include<iostream>
using namespace std;
namespace Nstudent

{
    class Student
{
      int rollno;
      string name;
      int mark; 

  public:
     void intStudent()
     {
        this->rollno=0;
        this->name="";
        this->mark=0;
     }
     void printStudent()
     {
        cout<<"Enter Rollno= " <<this->rollno<<endl;
        cout<<"Enter Name= " <<this->name<<endl;
        cout<<"Enter Mark= " <<this->mark<<endl;
     }
     void acceptStudent()
     {
        cout<<"Enter Rollno= ";
        cin>>this->rollno;
        getchar();
        cout<<"Enter Name = ";
        //cin>>this->name;
        getline(cin,name);
        cout<<"Enter Mark= ";
        cin>>this->mark;    

     }
};
}
using namespace Nstudent;
int main()
{
    Student s1;
   // Nstudent::Student s1;
    s1.acceptStudent();
    s1.printStudent();
}