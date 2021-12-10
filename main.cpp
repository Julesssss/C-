#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // printf is C, not C++ 
    printf("Hello World!\n");

    printf("This is a float: %2.3f\n", 3.14579f);

    printf("This is a String: %s\n", "STRING");

    printf("This is a Char: %c\n", 'c');

    // For loops
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    // Test function
    printf("2 + 9 = %d\n", add(2, 9));

    // Get input
    printf("Input a number: ");
    int var;
    scanf("%d", &var);
    printf("\nYou entered: %d", var);

    // Get String input
    printf("\nInput a String: ");
    char stringBuffer[10];
    scanf("%s", &stringBuffer);
    printf("\nYou entered: %s", stringBuffer);

    // Seed random time
    srand(time(NULL));
    
    // Get random number
    int randNumber = rand() % 100;
    printf("\nRandom number: %d", randNumber);
    
    return 0;
}