#include<iostream>
using namespace std;

class student
 //namespace Nstudent
   {
    private:
      int rollno;
      string name;
      int mark;      
    
    public:

     void intstudent()
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

int main()
{
    student s1;
   // Nstudent::student s1;
    s1.acceptStudent();
    s1.printStudent();
}