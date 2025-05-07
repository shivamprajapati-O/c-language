#include<stdio.h>
int main(){

    int fd, ld , no ;

    printf("Enter the number");
    scanf("%d",&no);

    fd = no%10;
    
    while (no>10)
    {
        ld = no/10;
        no--;
    }
    printf("%d",ld+fd);
}