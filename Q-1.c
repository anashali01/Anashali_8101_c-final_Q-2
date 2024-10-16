//find the third angel of triangle if two angles given  
#include <stdio.h>      //start program
int main()
{
    int  a,b,c;    //declare 3 variable

    printf("Enter the first angel of triangle :");    //input from user
    scanf("%d",&a);
    printf("Enter the second angel of triangle :");
    scanf("%d",&b);

    c=180-(a+b);     //formula of find third angel of triangle

    printf("The third angel of triangle is : %d ",c);     //print the answer
 
    return 0;

}      //end the program