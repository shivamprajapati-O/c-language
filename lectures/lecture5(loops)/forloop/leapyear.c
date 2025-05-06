#include<stdio.h>
int main(){
    int year1 , year2 ; 
    printf("Enter first year ");
    scanf("%d",&year1);
    printf("Enter Second year ");
    scanf("%d",&year2);

    for ( int i = year1 ; i < year2; i++)
    {
        if (i%4 == 0)
        {
            printf("%d \n",i);
        }
        
    }
    
    
    
}