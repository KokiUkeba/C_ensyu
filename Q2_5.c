#include<stdio.h>

int main(void)
{
    float a;
    int b;

    scanf("%f", &a);

    b = a;

    printf("%d, %f\n", b, a - b);

    return 0;
}
