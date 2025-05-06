#include<stdio.h>
int main(){
    int no = 123 , rev=0 , r ; 

    while (no>0)
    {
        r = no%10 ;
        rev = (rev*10) + r ; 
        no = no/10 ;

    }
    printf("%d",rev);
    
}