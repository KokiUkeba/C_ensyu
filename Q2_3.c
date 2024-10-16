#include<stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    int iabs = input >> 31 ? input * -1 : input;

    printf("%d\n", iabs);

    return 0;
}
