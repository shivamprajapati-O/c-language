#include<stdio.h>
int main(){
    int score ;
    char grade ; 
    printf("Enter your score \n");
    scanf("%d",&score);
    grade = (score>90 && score<100)? 'A' :
    (score>=80 )? 'B' : 
    (score>=70 )? 'C' : 
    (score>=60 )? 'D' : 
    (score>=50 )? 'E' : 
    (score>=40 )? 'F' : '?';


    printf("your grade is %c",grade);
}