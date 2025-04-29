#include<stdio.h>

int main(){

int ch , a ;

    printf(" Enter 1 to enter main menu \n");
    printf(" Enter 2 to exit \n");
    scanf("%d",&ch);
    printf("Chose the option \n");

    switch (ch)
    {


        case 1:
        printf("1. burger \n");
        printf("2. Pizza \n");
        printf("3. Cold drink \n");

        default:
        printf("Thank you ! ");

        
        scanf("%d",&a);

        switch (a)
        {
        case 1:
            printf("Ordered Burger\n");
            break;
        case 2:
            printf("Ordered pizza \n");

        case 3:
            printf("ordered cold drink \n");
        
        default:
        printf("Invalid Choice");
            break;
        }
        

    }
}
    
        
        
       
    