#include <stdio.h>
#define PI 3.14

int main() {
    char firstname[20], lastname[20];
    int birthdate;
    printf("Input your firstname: ");
    scanf("%s", firstname);
    printf("Input your lastname: ");
    scanf("%s", lastname);
    printf("Input your year of birth: ");
    scanf("%d", &birthdate);

    printf("%s %s %d\n", firstname, lastname, birthdate);
    return(0);
}
