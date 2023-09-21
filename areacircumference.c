#include<stdio.h>

float getArea(float r){
    return 3.14*(r*r);

}
float getCircumference(float r){
    return 2*3.14*r;

}

void main()
{
    printf("Enter radius - ");
    float radius;
    scanf("%f",&radius);

    printf("Area is %f\n",getArea(radius));
    printf("Circumference is %f\n",getCircumference(radius));
}