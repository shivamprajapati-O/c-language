#include<stdio.h>
int main(){

    int a , b , c , d ;

    printf("Enter number a : - \n");
    scanf("%d",&a);
    printf("Enter number b : - \n");    
    scanf("%d",&b);
    printf("Enter number c : - \n");    
    scanf("%d",&c);
    printf("Enter number d : - \n");    
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is max");
            }else{
                printf("D is max");
            }
            
        }if (c>d)
        {
            printf("c is max");
        }else{
            printf("D is max");
        }
        
        
    }else{
        if (b>c)
        {
            if (b>d)
            {
                printf("b is max");
            }else{
                printf("D is max");
            }
            
        }if (c>d)
        {
            printf("c is max");
        }else{
            printf("D is max");
        }
    }
    
}