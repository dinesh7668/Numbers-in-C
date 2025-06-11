#include <stdio.h>

int main()
{                                                   //                 DATE- 18/MAR/2024
    int n, rev = 0, rem, num;                       //           SUCCESSFULY RUN IN SECOND TRY
    printf("Enter  number : ");      
    scanf("%d", &n);
    num = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (rev == num)
    {
        printf("The number %d is a palindronme number", num);
    }
    else
    {
        printf("The number %d is not a palindrome number ", num);
    }
    return 0;
}