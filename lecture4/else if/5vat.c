#include<stdio.h>
int main()
{
    int a = 1, b = 2 , c =3 , d = 4 , e = 5 ;
    
    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("a is max");
                }else{
                    printf("E is max");
                }
            } 
            if(d>e){
                printf("d is max");
            }else{
                printf("E is max");
            }
        }
    }
}