#include<stdio.h>
int main(){
    int i=0 , n ;
    printf("Enter the value of N  \n");
    scanf("%d",&n);
    printf("Number from 1 to N are:  \n");
        do
        {
            i++;
            printf("%d \n",i);
        } while (i<n);
        
}