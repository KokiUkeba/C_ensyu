#include<stdio.h>

int main(void)
{
    unsigned int input;
    scanf("%d", &input);

    if (!(input % 2) && (input != 2)) {
        printf("0\n");
        return 0;
    }

    int i = 1;
    while ((i += 2) < input) {
        if (!(input % i)) {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");
    return 0;
}
