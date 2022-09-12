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
       return sum;
}
float average_height(float x)
{
    x = x / 10;
    return x;
}
int main()
{
    float sum;
    printf("The average height of 10 people is %.1f",average_height(input_height(sum)));
    return 0;
}