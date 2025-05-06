#include<stdio.h>
int main(){
    int hra=10 , da=5 , ta=8 , bs , fs;
    printf("Enter the base salary \n");
    scanf("%d",&bs);
    fs = bs + (bs*hra)/100 + (bs*ta)/100 + (bs*da)/100 ; 
    printf("Final salary is %d",fs);

}