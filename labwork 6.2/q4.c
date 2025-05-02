#include<stdio.h>
int main(){
    int a = 0 , b = 1 , next, n ; 
    printf("Enter the value of N \n");
    scanf("%d",&n);
    
    for (int i = 0; i < n ; i++)
    {
        next = a + b ; 
        a = b ; 
        b = next ; 
        printf("%d ",next);
    }

    printf("Sum :- %d",next);
    
}