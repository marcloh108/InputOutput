#include <stdio.h>
#define PI 3.14

int main() {

    float radius;
    float volume;
    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);



    volume = (4.0 / 3.0) * PI * (radius * radius * radius);
    printf("The volume of sphere is %f.\n", volume);

    return(0);
}
