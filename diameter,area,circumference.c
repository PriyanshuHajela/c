#include<stdio.h>
int main()
{
    int radius,diameter;
    float circumference,area;
    scanf("%d",&radius);
    diameter=2*radius;
    printf("diameter=%d\n",diameter);
    circumference=2*3.14*radius;
    printf("circumference=%f\n",circumference);
    area=3.14*radius*radius;
    printf("area of circle=%f\n",area);
    return 0;
}