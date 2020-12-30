#include<stdio.h>
int main(){
    int age;
    int vipPass=0;
    printf("Enter your age : \n");
    scanf("%d", &age);
    printf("Enter 1 if u have VIP pass, enter 0 if you don't have one : \n");
    scanf("%d", &vipPass);
    if(age>=18 && age<70 || vipPass==1){
        printf("You are allowed to drive\n");
    }
    else{
        printf("You cannot drive. \n");
    }
    return 0;
} 