#include <stdio.h>
#include <stdlib.h>
 
#define Ulen 10
 
void merge_sort(int*, int, int);
 
int main(void)
{
    int U[Ulen];
    int i;

    for (i = 0; i < Ulen; i++) 
        U[i] = rand();

    for (i = 0; i < Ulen; i++)
        printf("%d ", U[i]);
    printf("\n");

    merge_sort(U, 0, Ulen - 1);

    return 0;
}
 
void merge_sort(int* pArray, int start, int end){
    static int tmp[Ulen];
    int mid,i,j,k;
    if(start >= end){
        return;
    }
    mid = (start + end) / 2;
    merge_sort(pArray, start, mid);
    merge_sort(pArray, mid + 1, end);
    k = 0;

    for(i = start; i <= mid; i++){
        tmp[k] = pArray[i];
        k++;
    }
    for(j = end; j >= mid + 1 ; j--){
        tmp[k] = pArray[j];
        k++;
    }

    i = 0;
    j = end - start;
    for(k = start; k <= end ; k++){
        if(tmp[i] <= tmp[j]){
            pArray[k] = tmp[i];
            i++;
        } else {
            pArray[k] = tmp[j];
            j--;
        }
    }

    for (i = 0; i < Ulen; i++)
        printf("%d ", pArray[i]);
    printf("\n");
}
