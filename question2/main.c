#include <stdio.h>

int main() {
    int a, b, c;
    printf("Input two angles of triangle separated by comma: ");
    scanf("%d, %d", &a, &b);
    c = 180 - a - b ;
    printf("Third angle of the triangle : %d", c);
    return(0);
}
