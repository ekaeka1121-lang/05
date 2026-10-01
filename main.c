#include <stdio.h>

int main(void)
{
    int num; //정수선언

    printf("Input an integer:");
    scanf("%i",&num);

    if (num>=0)
        printf("Absolute value: %d!\n",num);
    else
        printf("Absolute value: %d!\n",-num);

    return 0;

    
}