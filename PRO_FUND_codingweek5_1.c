#include<stdio.h> //จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร (Level 3)
int main()
{
    float input[10];
    float output;
    float x = 0;
    for(int i = 0;i<10;++i)
    {
        printf("Enter height :");
        scanf("%f",&input[i]);
    }
    printf("INPUT : ");
     for(int i = 0;i<10;i++)
     {
        printf("%0.1f\t",input[i]);
     }
     for(int i = 0;i<10;i++)
    {
            x = x + input[i];
    }
        output = x / 10;
        printf("\nThe average height of 10 people is %0.1f",output);
    return 0;
}