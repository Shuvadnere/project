//ca;culate area and circumference of circle

#include<stdio.h>

int main()
{
    float red,area,cir;
    //input
    printf("enter the redius\n");
    scanf("%f",&red);

    //processiong logic
    area = 3.142*red*red;
    cir = 2*3.142*red;

    //output display
    printf("area=%.2f\n",area);
    printf("circumference=%.2f\n",cir);

    return 0;
}