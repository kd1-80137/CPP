#include<iostream>
using namespace std;
class Date
{
 private:
    int Day;
    int Month;
    int Year;

public:
   
    void initDate()
{
    this->Day = 01;
    this->Month = 02;
    this->Year = 1999;
}
void printonCosolesetDate()
{
    cout<< "initDate= "<<this->Day  <<"/"<<this->Month <<"/" <<this->Year<< endl;
}
void acceptDate()
{
    cout<<"\n Enter Day= ";
    cin>>this->Day;
    cout<<"\n Enter Month= ";
    cin>>this->Month;
    cout<<"\n Enter Year= ";
    cin>>this->Year;

}

// void displayDate()
// {
//     cout<<"Date= "<<this->Day, this->Month, this->Year;
// }

bool isleapYear()
{
    int y=this->Year;
    if(y%400==0 || y%4==0 && y%100!=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}   

};
// void acceptDateFromConcole()
// {
//     printf("Enter The Day= ");
//     scanf("%d", &d->Day);
//     printf("Enter Month= ");
//     scanf("%d", &d->Month);
//     printf("Enter Year= ");
//     scanf("%d", &d->Year);
// }
int main()
{
   Date d1;
   int choice=1;
 
 while(choice)
 {
   
    printf("Enter choice no\n 1\n 2 \n 3 \n 2 \n 4 \n 0= exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        d1.initDate();
        d1.printonCosolesetDate();

        break;
    case 2:
        d1.acceptDate();
        break;

    case 3:
        d1.printonCosolesetDate();
        break;

    case 4:
        if(d1.isleapYear())
        {
           printf("This is leap Year");
        }
        else
        {
          printf("This is not leap year");
        }
        break;

     default:
          printf("invalid choice");
    }   
 } 
    printf("BY using Class and Object");
//  D1 d1
      
}
