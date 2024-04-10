#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;

double distance(Point p1, Point p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main()
{
    Point a = { 1, 2 };
    Point b = { 6, 5 };

    printf("A két Point közti távolság: %lf\n", distance(a, b));

    return 0;
}