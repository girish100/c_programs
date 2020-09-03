//program to convert celsius to fahnerheit and vice versa
#include<stdio.h>
void main()
{
    int choice;
    float c,f,temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    printf("1.Celsius to fahrenheit\n2.Fahrenheit to celsius\nchoose one: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    //celsius to fahrenheit
    f = temp * 0.18 + 32;
    printf("%f Fahrenheit", f);
        break;
    case 2:
    //Fahrenheit to celsius
    c = 0.555 * (temp - 32);
    printf("%f Centigrade", c);
    break;

    default:
    printf("choose any one from the above options");
        break;
    }
}
