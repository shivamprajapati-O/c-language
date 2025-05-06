#include<stdio.h>
int main(){

    int a , b , c , d ,e ;

    printf("Enter number a : - \n");
    scanf("%d",&a);
    printf("Enter number b : - \n");    
    scanf("%d",&b);
    printf("Enter number c : - \n");    
    scanf("%d",&c);
    printf("Enter number d : - \n");    
    scanf("%d",&d);
    printf("Enter number e : - \n");    
    scanf("%d",&e);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                if (a>e)
                {
                    printf("A is max");
                }else{
                    printf("E is max");
                }
                
            }else{
                if (d>e)
                {
                    printf("d is max");
                }else{
                    printf("E is max");
                }
            }
            
        }else{
            if (c>d)
            {
                if (c>e)
                {
                    printf("c is max");
                }else{
                    printf("E is max");
                }
                
            }else{
                if (d>e)
                {
                    printf("d is max");
                }else{
                    printf("E is max");
                }
            }
        }
        
    }else{
        if (b>c)
        {
            if (b>d)
            {
                if (b>e)
                {
                    printf("b is max");
                }else{
                    printf("E is max");
                }
                
            }else{
                if (d>e)
                {
                    printf("d is max");
                }else{
                    printf("E is max");
                }
            }
            
        }else{
            if (c>d)
            {
                if (c>e)
                {
                    printf("c is max");
                }else{
                    printf("E is max");
                }
                
            }else{
                if (d>e)
                {
                    printf("d is max");
                }else{
                    printf("E is max");
                }
            }
        }
    }
    
}
              

