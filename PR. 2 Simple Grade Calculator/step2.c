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


    printf("your grade is %c \n",grade);
    switch (grade)
    {
    case 'A':
        printf("Excellent work!");
        break;
    case 'B':
        printf("Well Done! ");
        break;    
    case 'C':
        printf("Good job!");
        break;
    case 'D':
        printf("You passed , but you could do better!");
        break;
    case 'F':
        printf("sorry you failed!");
        break;

    default:
        break;
    }
}