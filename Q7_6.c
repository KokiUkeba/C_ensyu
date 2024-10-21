#include<stdio.h>
#include<stdlib.h>

#define U_LEN 10
#define max 1000
#define min 0

void swap(int *a, int *b);
void pushdown(int *pArray, int first, int last);
void heap_sort(int *pArray, int array_size);

int main(void)
{
    int U[U_LEN];
    int i;

    for (i = 0; i < U_LEN; i++) 
        U[i] = min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));

    for (i = 0; i < U_LEN; i++)
        printf("%d ", U[i]);
    printf("\n");

    heap_sort(U, U_LEN - 1);

    for (i = 0; i < U_LEN; i++)
        printf("%d ", U[i]);
    printf("\n");

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void pushdown(int *pArray, int first, int last)
{
    int parent = first;
    int child = 2 * parent;

    while (child <= last) {
        if ((child < last) && (pArray[child] < pArray[child+1]))
            child++;
        if (pArray[child] <= pArray[parent])
            break;
        swap(&pArray[child], &pArray[parent]);
        parent = child;
        child = 2 * parent;
    }
}

void heap_sort(int *pArray, int array_size)
{
    int i;

    for (i = array_size / 2; i >= 1; i--) 
        pushdown(pArray, i, array_size);

    for (i = array_size; i >= 2; i--) {
        swap(&pArray[1], &pArray[i]);
        pushdown(pArray, 1, i - 1);
    }
}
