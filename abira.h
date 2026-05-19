#include <stdio.h>

// Maximum from array
int max(int arr[], int n)
{
    int mx = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    return mx;
}

// Minimum from array
int min(int arr[], int n)
{
    int mn = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    return mn;
}

// Prime Check
int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

// Odd Check
int isOdd(int n)
{
    return n % 2 != 0;
}

// Even Check
int isEven(int n)
{
    return n % 2 == 0;
}

// Digit Sum
int digitSum(int n)
{
    int sum = 0;

    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Reverse Number
int reverseNumber(int n)
{
    int rev = 0;

    while(n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return rev;
}

// Palindrome
int palindrome(int n)
{
    return n == reverseNumber(n);
}

// Decimal to Binary
void decimalToBinary(int n)
{
    int binary[100];
    int i = 0;

    while(n > 0)
    {
        binary[i++] = n % 2;
        n /= 2;
    }

    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");
}

// Binary to Decimal
int binaryToDecimal(int n)
{
    int decimal = 0;
    int base = 1;

    while(n > 0)
    {
        int lastDigit = n % 10;

        decimal += lastDigit * base;

        base *= 2;

        n /= 10;
    }

    return decimal;
}

// Decimal to Octal
void decimalToOctal(int n)
{
    printf("%o\n", n);
}

// Decimal to Hexadecimal
void decimalToHexadecimal(int n)
{
    printf("%X\n", n);
}

