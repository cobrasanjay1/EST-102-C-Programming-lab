#include <stdio.h>
#include <math.h>
struct Point 
{
    double x;
    double y;
    double z;
};
double distance(struct Point p1, struct Point p2) 
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}
int main()
{
    struct Point point1, point2;
    printf("Enter the coordinates of the first point (x y z): ");
    scanf("%lf %lf %lf", &point1.x, &point1.y, &point1.z);
    printf("Enter the coordinates of the second point (x y z): ");
    scanf("%lf %lf %lf", &point2.x, &point2.y, &point2.z);
    double dist = distance(point1, point2);
    printf("The Euclidean distance between the two points is: %.2f\n", dist);
    return 0;
}