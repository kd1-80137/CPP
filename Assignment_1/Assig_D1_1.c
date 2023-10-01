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
void displayDate(struct Date *d)
{
    printf("Date= %d : %d : %d", d->Day, d->Month, d->Year);
}
int main()
{
 struct Date d;
 int choice;
   do 
 {
   
    printf("Enter choice no 1\n 2\n 3\n 0.exit");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        initDate(&d);
        displayDate(&d);

        break;
    case 2:
        acceptDateFromConcole(&d);
    
    case 3:
        displayDate(&d);
        break;
    }   
 } while (choice= 0);
return 0;
}
