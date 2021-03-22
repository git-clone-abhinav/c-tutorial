#include <stdio.h>
#include <math.h>
int main() {
    char operator;
    float first, second;
    printf("Enter an operator (+, -, *, /, ^): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &first, &second);

    switch (operator) {
    case '+':
        printf("%f + %f = %f", first, second, first + second);
    case '-':
        printf("%f - %f = %f", first, second, first - second);
        break;
    case '*':
        printf("%f * %f = %f", first, second, first * second);
        break;
    case '/':
        printf("%f / %f = %f", first, second, first / second);
        break;
    case '^':
        printf("%f",pow(first,second));
        break;
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}