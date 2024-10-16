#include<stdio.h>
#include<stdlib.h>

#define N 100

int main(void)
{
    int U[N];
    int i, j;

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        U[i] = rand();
    }

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        for (j = ((sizeof(U) / sizeof(U[0])) - 1); j > i; j--) {
            if (U[j] < U[j - 1]) {
                int temp = U[j - 1];
                U[j - 1] = U[j];
                U[j] = temp;
            }
        }
    }

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        printf("%d\n", U[i]);
    }

    return 0;
}
