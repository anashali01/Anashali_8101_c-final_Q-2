//write program to print total days in month
#include <stdio.h>
int main(){
    int totalmonth;
    printf("enter you're month :");
    scanf("%d",&totalmonth);
    switch (totalmonth)
    {
    case 1:
    printf("January have total 31 days in month  ");
    break;

    case 2:
    printf("February have total 28 days in month  ");
    break;

    case 3:
    printf("March have total 31 days in month  ");
    break;

    case 4:
    printf("April have total 30 days in month  ");
    break;

    case 5:
    printf("May have total 31 days in month  ");
    break;

    case 6:
    printf("June have total 30 days in month  ");
    break;

    case 7:
    printf("july have total 31 days in month");
    break;

    case 8:
    printf("August have total 31 days in month");
    break;

    case 9:
    printf("September have total 31 days in month");
    break;

    case 10:
    printf("October have total 31 days in month");
    break;

    case 11:
    printf("November have total 31 days in month");
    break;

     case 12:
    printf("December have total 31 days in month");
    break;
   
    default:
    printf("Enter month please!!!!");
        break;
    }

    return 0;

}