#include<stdio.h>

int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", !(a%b) * b);

    return 0;
}
