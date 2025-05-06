#include<stdio.h>
int main()
{

    int num , i=1 , sum=0 ;

    printf("Enter a positive number");
    scanf("%d",&num);

    printf("Sum = ");
    while (i<num)
    {
        sum = sum + i ;
        printf("%d",i);
        i++;
        if (i<num)
    {
        printf("+");
    }
        
        
    }
    printf("= %d",sum);
    
    return 0;

}