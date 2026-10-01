#include <stdio.h>

int main(void)
{
    int num; //정수선언

    printf("Input an integer:");
    scanf("%i",&num);

    if (num>0)
        printf("Positive\n");
    else if (num<0)
        printf("Negative\n");
    else
        printf("Zero\n");

    return 0;

    
}