#include <stdio.h>
int main()
{
    float p , r ,t ; 
    printf("Enter the principle value  :- ");
    scanf("%f",&p);
    printf("Enter the value of rate  : -  ");
    scanf(" %f",&r);
    printf("Enter the value of time :-");
    scanf("%f",&t);
    printf("principle interest  = %2f " , p*r*t /100  );
    return 0;
}