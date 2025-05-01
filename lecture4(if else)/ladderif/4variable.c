#include<stdio.h>
int main()
{
    int a , b , c , d ;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    printf("Enter the value of c ");
    scanf("%d",&c);
    printf("Enter the value of d ");
    scanf("%d",&d);

    if (a>b && a>c && a>d)  
    {
        printf("a is max");
    }else if (b>c && b>d )
    {
        printf("b is max");

    }
    else if (c>d)
    {
        printf("C is max");
    }
    else
    { 
        printf("D is max");
    }
    
    
    
    
}