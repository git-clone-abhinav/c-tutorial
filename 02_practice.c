#include<stdio.h>
#include<math.h>
int main(){
    // if a nummber is divisible by 97 or not
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisibility test returns : %d\n", num%97);
}