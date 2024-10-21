#include<stdio.h>
#include<stdlib.h>

#define lenU 100
#define max 1000
#define min 0

void quiq_sort(int *, int, int);
int partition(int *, int, int);

int main(void)
{
    int U[lenU];
    int i;

    for (i = 0; i < lenU; i++)
        U[i] = min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));

    for (i = 0; i < lenU; i++)
        printf("%d ", U[i]);
    printf("\n");

    quiq_sort(U, 0, lenU - 1);

    for (i = 0; i < lenU; i++)
        printf("%d ", U[i]);
    printf("\n");

    return 0;
}

void quiq_sort(int *pArray, int p, int r)
{
    int q;
    if (p < r) {
        q = partition(pArray, p, r);
        quiq_sort(pArray, p, --q);
        quiq_sort(pArray, ++q, r);
    }
}  

int partition(int *pArray, int p, int r)
{
    int x = pArray[r];
    int i = p - 1;

    for (int j = p; j < r; j++) {
        if (pArray[j] <= x) {
            i++;
            int temp = pArray[j];
            pArray[j] = pArray[i];
            pArray[i] = temp;
        }
    }

    int temp = pArray[i + 1];
    pArray[i + 1] = pArray[r];
    pArray[r] = temp;

    //for (int j = 0; j < lenU; j++)
    //    printf("%d ", pArray[j]);
    //printf("\n");
    return i + 1;
}
