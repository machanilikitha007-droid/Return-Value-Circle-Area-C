#include <stdio.h>

float calculateArea(float radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = calculateArea(radius);

    printf("Area of Circle = %.2f\n", area);

    return 0;
}
