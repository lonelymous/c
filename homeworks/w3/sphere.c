#include <stdio.h>
#include <math.h>

double get_double()
{
    double radius;
    scanf("%lf", &radius);
    return radius;
}

double surface(double radius)
{
    return 4 * M_PI * pow(radius, 2);
}

double volume(double radius)
{
    return 4 * M_PI * pow(radius, 3) / 3;
}

int main(int argc, char const *argv[]) {
    printf("Add meg a gömb sugarát: ");
    double radius = get_double();

    printf("A gömb felszíne: %lf\n", surface(radius));
    printf("A gömb térfogata: %lf\n", volume(radius));

    return 0;
}