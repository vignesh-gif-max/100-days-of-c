#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    float height;
    char grade;
    double bankbalance;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your bank balance: ");
    scanf("%lf", &bankbalance);    

    printf("\n-----your details are listed here-----\n");
    printf("age : %d\n",age);
    printf("height :%f \n" ,height);
    printf("grade : %c\n",grade);       
    printf("bank balance : %lf\n",bankbalance);
    getch();
    return 0;
}