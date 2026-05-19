#include <stdio.h>

#include "abira.h"

int main()
{
    int n;

   
    scanf("%d", &n);

    int arr[n];

   
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Maximum = %d\n", max(arr, n));

    printf("Minimum = %d\n", min(arr, n));

    int x;

    
    scanf("%d", &x);

    if(isPrime(x))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    if(isOdd(x))
        printf("Odd\n");

    if(isEven(x))
        printf("Even\n");

    printf("Digit Sum = %d\n", digitSum(x));

    printf("Reverse = %d\n", reverseNumber(x));

    if(palindrome(x))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    printf("Decimal to Binary = ");
    decimalToBinary(x);

    printf("Binary to Decimal = %d\n", binaryToDecimal(1010));

    printf("Decimal to Octal = ");
    decimalToOctal(x);

    printf("Decimal to Hexadecimal = ");
    decimalToHexadecimal(x);

    return 0;
}/*
5
5 9 2 15 7
10
*/