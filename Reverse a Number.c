#include <stdio.h>
int main()
{
    long long int n, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%lld", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %lld", reversedNumber);
    return 0;
}
