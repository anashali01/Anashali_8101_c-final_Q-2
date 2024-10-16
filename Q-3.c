//cube of any numbers using user  defined function
#include <stdio.h>
int a(int x){

    return x*x*x;
    
}
int main()
{
    int num1,r;

    printf("Enter number:");
    scanf("%d",&num1);

    r=a(num1);
    printf("%d",r);    

    return 0;

}
