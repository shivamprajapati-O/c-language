#include<stdio.h>
int main(){
    int num , digit=0;
    printf("Enter A positive number");
    scanf("%d",&num);

    
    while (num>0)
    {
        num = num/10;
        digit++;
    }
    printf("%d",digit);
}