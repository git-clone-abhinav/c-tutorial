#include<stdio.h>
#include<math.h>

int main(){
    int a=3 ;
    int b=2 ;
    int sum=a+b ;
    int diff=a-b ;
    float div=a/b ;
    int multi=a*b ;
    printf("Sum = %d\n",sum);
    printf("Difference = %d\n",diff);
    printf("Quotent = %f\n",div);
    printf("Product = %d\n",multi);
    printf("Power value = %f\n", pow(a,b)); // Can only result in a float data-type -> nothing like a^b
    return 0;
}