#include<stdio.h>

int main(void)
{
    char input;
    int n = 'a' - 'A';

    scanf("%c", &input);

    char output = 'A' <= input && input <= 'Z' ? input + n : input - n;

    printf("%c\n", output);

    return 0;
}
