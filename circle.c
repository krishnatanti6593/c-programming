#include<stdio.h>
int main(){
    float r,area,circumference;
    printf("Enter the radius");
    scanf("%d",&r);
    area=3.14*r*r;
    circumference=2*3.14*r;
    printf("area of the circle : %d",area);
    printf("circumference of the circle : %d",circumference);
    return 0;
}