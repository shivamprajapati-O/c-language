#include<stdio.h>
int main()
{
    int a , b ;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf("Enter the value of b ");
    scanf("%d",&b);
    printf("%d\n",a>b);
    printf("%d \n",a>=b); 
    printf("%d\n",a<=b); 
    printf("%d\n",a==b); 
    printf("***************************** \n");
    printf("%d\n", !(a>b));
    printf("%d\n", a>b && a<b );
    printf("%d\n", a>b || a<b);


    return 0;
}