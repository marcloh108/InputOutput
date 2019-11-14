#include <stdio.h>

int main() {
    int a, b, c, sum;
    printf("Input three numbers separated by comma :");
    scanf("%d, %d, %d", &a, &b, &c);
    sum = a + b + c;
    printf("The sum of three numbers : %d", sum);
    return(0);
}
