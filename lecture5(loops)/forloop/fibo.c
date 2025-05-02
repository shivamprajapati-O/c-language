#include<stdio.h>
int main(){
    int a = 0 , b = 1 , next, n ; 
    scanf("%d",&n);
    
    for (int i = 0; i < n ; i++)
    {
        next = a + b ; 
        a = b ; 
        b = next ; 
        printf("%d ",next);
    }
    
}