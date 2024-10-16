#include<stdio.h>
#include<stdlib.h>

#define N 100

int main(void)
{
    int U[N];
    int i, j, min;

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        U[i] = rand();
    }

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        min = i;

        for (j = i + 1; j < (sizeof(U) / sizeof(U[0])); j++) {
            if (U[j] < U[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = U[i];
            U[i] = U[min];
            U[min] = temp;
        }
    }

    for (i = 0; i < (sizeof(U) / sizeof(U[0])); i++) {
        printf("%d\n", U[i]);
    }

    return 0;
}
