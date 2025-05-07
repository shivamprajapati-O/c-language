#include<stdio.h>
int main(){
int i,j,s;

for( i = 1; i <= 5; i++)
{
    for(j=1; j<=5;j++){
        if(i==1 ||  j==1 || j==3 || i==3){
            printf("*");
        }printf("");
    }
    printf("\n");
}
}