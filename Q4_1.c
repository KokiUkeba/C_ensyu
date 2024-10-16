#include<stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);
    
    for (int i = sizeof(int)*8 - 1; i >= 0 ; i--) {
        int s = 1 << i;
        
        if (s == (input & s)) {
            printf("1");
        } else {
            printf("0");
        }
    }

    printf("\n");
    return 0;
}
