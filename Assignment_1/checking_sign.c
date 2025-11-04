#include <stdio.h>

int main(void)
{
    // getting a number
    int x;
    printf("x: ");
    scanf("%d", &x);
    
    // checking for sign of the number
    if (x > 0)
        printf("Positive\n");
    else if (x < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
    
    
    // returning status code
    return 0;
}
