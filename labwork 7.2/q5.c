#include <stdio.h>  

int main() {
    int s;
    for (int i = 5; i>=1; i--){
        for ( s = 5; s >= i ; s--) {  

            printf(" ");              
        }
        for (int j = i; j>=1;j--) {  
                  
            printf("%d", j);              
        }
        printf("\n");                       
    }
    return 0;
}
