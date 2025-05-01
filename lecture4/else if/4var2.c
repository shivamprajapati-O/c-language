#include<stdio.h>
int main(){


int a=0 , b=2 , c=3 ,d=1 ;
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
    } else {
        if(c>d){
            printf("c is max");
        }
        else {
            printf("d is max");
        }
    }}else{
        if(b>c){
            if(b>d){
                printf("b is max");
            }else{
                printf("d is max");
            }}else{
                if(c>d){
                    printf("c is max");
                }else{
                    printf(" d is max");
                }
            }
        }
    }

