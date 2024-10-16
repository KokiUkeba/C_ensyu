#include<stdio.h>
#include<stdlib.h>

#define N 100
#define rmin 0
#define rmax 100

int main(void)
{
    int U[N];
    int i, j, min, max;

    for (i = 0; i < N; i++) {
        U[i] = rmin + (int)(rand() * (rmax - rmin + 1.0) / (1.0 + RAND_MAX));
    }

    min = U[0];
    max = U[0];

    for (i = 0; i < N; i++) {
        if (U[i] < min) {
            min = U[i];
        }
        if (U[i] > max) {
            max = U[i];
        }
    }

    int countLen = max - min + 1;
    int count[countLen];

    for (i = 0; i < countLen; i++) {
        count[i] = 0;
    }

    for (i = 0; i < N; i++) {
        count[U[i]]++;
    }

    int index = 0;
    i = 0;
    while (index < N) {
        if (count[i] != 0) {
            U[index] = i;
            index++;
            count[i]--;
        } else {
            i++;
        }
    }

    for (i = 0; i < N; i++) {
        printf("%d\n", U[i]);
    }

    return 0;
}
