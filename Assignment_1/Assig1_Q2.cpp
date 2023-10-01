#include <stdio.h>
struct Date
{
    int Day;
    int Month;
    int Year;
};
void initDate(struct Date *d)
{
    d->Day = 01;
    d->Month = 02;
    d->Year = 1999;
}
void acceptDateFromConcole(struct Date *d)
{
    printf("Enter The Day= ");
    scanf("%d", &d->Day);
    printf("Enter Month= ");
    scanf("%d", &d->Month);
    printf("Enter Year= ");
    scanf("%d", &d->Year);
}
bool isleapYear(Date d)
{
    int y=d.Year;
    if(y%400==0 || y%4==0 && y%100!=0)
    {
        return true;
    }
    else
    {
        return false;
    }
   
}
void displayDate(struct Date *d)
{
    printf("Date= %d : %d : %d", d->Day, d->Month, d->Year);
}
int main()
{
 struct Date d;
 int choice=1;
 
 while(choice)
 {
   
    printf("Enter choice no\n 1\n 2 \n 3 \n 2 0=exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        initDate(&d);
        displayDate(&d);

        break;
    case 2:
        acceptDateFromConcole(&d);
        break;

    case 3:
        displayDate(&d);
        break;

    case 4:
        if(isleapYear(d))
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
      
}
