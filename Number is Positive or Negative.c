#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    getch();
    return 0;
}
