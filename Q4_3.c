#include<stdio.h>
#include<math.h>

int main(void)
{
    for (int i = 1; i <= 1000000; i++) {
        if (!(i % 2) && (i != 2)) {
            continue;
        }

        int j = 1;
        while ((j += 2) <= sqrt(i)) {
            if (!(i % j)) {
                j = 0;
                break;
            }
        }
        
        if (j == 0 || i == 1) {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
}
