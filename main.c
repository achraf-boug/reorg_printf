#include <stdio.h>
#include "main.h"

int main() {
    int result;

    /* Test case 1: Basic character printing */
    result = _printf("Character: %c\n", 'A');
    printf("Expected: Character: A\n");
    printf("Returned: %d characters printed\n", result);
    printf("\n");

    /* Test case 2: String printing */
    result = _printf("String: %s\n", "Hello, world!");
    printf("Expected: String: Hello, world!\n");
    printf("Returned: %d characters printed\n", result);
    printf("\n");

    /* Test case 3: Percent sign printing */
    result = _printf("Percent sign: %%\n");
    printf("Expected: Percent sign: %\n");
    printf("Returned: %d characters printed\n", result);
    printf("\n");

    return 0;
}

