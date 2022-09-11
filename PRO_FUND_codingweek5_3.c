#include<stdio.h>
float input_height(float sum)
{
    float input[10];
    for(int i = 0;i<10;i++)
    {
    printf("Enter height :");
    scanf("%f",&input[i]);
    }
    for(int i = 0;i<10;i++)
    {
    sum = sum + input[i];
    }
    sum = sum / 10;
       return sum;
}
int main()
{
    float sum;
    printf("The average height of 10 people is %.1f",input_height(sum));
    return 0;
}