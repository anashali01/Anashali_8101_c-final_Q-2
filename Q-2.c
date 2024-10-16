//find sum of elements of matrix
#include <stdio.h>
int main()
{
    int row,column,sum=0;    //declare the variable

    printf("Enter you're row size :");   //take input from user
    scanf("%d",&row);
    printf("Enter you're column size :");
    scanf("%d",&column);

    int a[row][column];    //declare arry
    int i,j;

    for(i=0;i<row;i++)    
    {
        for(j=0;j<column;j++)
        {
            printf("Enter element [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
    }
}
for(i=0;i<row;i++)
{
        for(j=0;j<column;j++)
        {
        sum=sum+a[i][j];        
    }
}

printf("%d the answer ",sum);

return 0;

}