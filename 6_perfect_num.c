#include <stdio.h>

int main()
{
    int n, num, rem, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
                                                     //   *UNABLE TO UNDERSTAND THE LOGIC OF PERFECT NUMBERS*
    num = n;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    }

    if (sum == num)
    {
        printf("The number is perfect");
    }
    else
    {
        printf("The number is not perfect number");
    }

    return 0;
}