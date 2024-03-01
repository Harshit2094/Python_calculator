#include<stdio.h>
int main()
{
    float x,y,z;
    int choice;
    printf("Enter first number: ");
    scanf("%f",&x);
    printf("Enter second number: ");
    scanf("%f",&y);
    printf("Choose 1 for addition\n");
    printf("Choose 2 for subtraction\n");
    printf("Choose 3 for multiplication\n");
    printf("Choose 4 for division\n");
    printf("Enter choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            z=x+y;
            printf("%f",z);
            break;
        case 2:
            z=x-y;
            printf("%f",z);
            break;
        case 3:
            z=x*y;
            printf("%f",z);
            break;
        case 4:
            z=x/y;
            printf("%f",z);
            break;
    }
    return 0;
}