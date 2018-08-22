// Chané van der Berg
// 11/08/2018

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Set all the variables
    int num = 0;
    int temp = 0;
    int fact = 0;
    int result = 0;
    int n = 0;
    int m = 0;

    // Prompt and read user input
    printf("Enter number to check if STRONG: ");
    scanf("%d", &num);

    // Set parameters for the program
    if(num > 0 && num < 1000)
    {
        // Determine sum of factorial of number
        temp = num;
        while(num)
        {
           n = 1, fact = 1;
           m = num%10;
           while(n <= m)
           {
               fact = fact*n;
               n++;
           }
           result = result+fact;
           num = num/10;
        }

        // Conditions and output of program
        if(result == temp)
            printf("%d is STRONG", temp);
        else
            printf("%d is NOT STRONG", temp);

        return 0;
    }

    else
        printf("Invalid number");                   // Error message
        return 1;
}
