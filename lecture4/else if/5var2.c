#include<stdio.h>
int main(){
    int a=4 , b=3 , c=2 , d=1 , e = 0;
    
    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    printf("A is max");
                }else{
                    printf("E is max");
                }
            }if(d>e){
                printf("d is max");
            }else{
                printf("E is max");
            }
            }if(c>d){
                if(c>e){
                    if(c>d){
                        if(c>e){
                            printf("c is max");
                        }else{
                            printf("E is max");
                        }
                    }
                }
            }if(d>e){
                printf("D is max");
            }else{
                printf(" E is max");
            }
            }if(b>c){
                if(b>d){
                    if(b>e){
                        printf("b is max");
                    }else{
                        printf("e is max");
                    }
                }if(d>e){
                    printf("d is max");
                }else{
                    printf("E is max");
                }
            }if(c>d){
                if(c>e){
                    printf("C is max");
                }else{
                    printf("E is max");
                }
            }if(d>e){
                printf("D is max");
            }else{
                printf("E is max ");
            }
        }
    
