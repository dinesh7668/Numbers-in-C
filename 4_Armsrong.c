// #include <stdio.h>
// #include<math.h>

// int main()
// {                             //                                    DATE - 18/MAR/2024
//     int dig, n, z, num, sum = 0; //                         IT TOOK 4 TRIAL TO GIVE DESIRED OUTPUT
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     num = n;
//     z = n;
//     int j = 0;

//     while(z >0)
//     {
//         j++;
//         z = z/10;
//     }
    
//     printf("your number have %d digits",j);

//     while (n > 0)
//     {
//         dig = n % 10;
//         sum = sum + pow(dig,j); 
//         n = n / 10;
//     }
//     if (sum == num)
//     {
//         printf("\nThe number %d is an Armstrong number", num);
//     }
//     else
//     {
//         printf("\nThe number %d is not Armstrong number", num);
//     }
//     return 0;
// }

#include <stdio.h>

// Function to calculate integer power
int power(int base, int exp) {
    int res = 1;
    while (exp > 0) {
        res *= base;
        exp--;
    }
    return res;
}

int main()
{
    int dig, n, z, num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n;
    z = n;
    int d = 0;

    while(z > 0)
    {
        d++;
        z = z / 10;
    }

    printf("Your number has %d digits\n", d); 

    n = num; 
    while (n > 0)
    {
        dig = n % 10;
        sum = sum + power(dig, d); // Using our custom power function not pow() from math library
        n = n / 10;
    }

    if (sum == num)
    {
        printf("The number %d is an Armstrong number\n", num); 
    }
    else
    {
        printf("The number %d is not Armstrong number\n", num); 
    }
    return 0;
}