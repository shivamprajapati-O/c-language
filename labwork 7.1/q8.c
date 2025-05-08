#include <stdio.h>  

int main() {
    int num=1;
    for (int i = 1; i <= 5; i=i+1){
        for (int j = i; j >= 1; j--) {        
            printf("%d ", num); 
            num++;             
        }
        printf("\n");                       
    }   
    return 0;
}
