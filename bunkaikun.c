/*
 * bunkaikun.c
 *
 *  Created on: 2023/11/09
 *      Author: quanc
 */

#include <stdio.h>
#include <math.h>

int
main(void)
{
  int N, n, M, m, i;
  int w = 0;
  int k = 0;

  N = n = 119028;
  M = m = 2146654199;

  printf("%d =\n", N);

  if (n < 2) {
    printf("negative number\n");
  }
  else {
    while ((n % 2) == 0) {
      n = n / 2;
      k++;
      if ((n % 2) != 0){
	printf("2 ** %d\n", k);
	k = 0;
      }
    }

    for (i = 3; i < N; i += 2) {
      while ((n % i) == 0) {
	w = 1;
	k++;
	n = n / i;
	if ((n % i) != 0) {
	  printf("%d ** %d\n", i , k);
	  k = 0;
	}
	if (n == 1) {
	  break;
	}
      }

     if((i > sqrt(N)) && (w == 0)){
       printf("%d\n", N);
       break;
     }
    }
  }

  printf("%d =\n", M);

    if (m < 2) {
      printf("negative number\n");
    }
    else {
      while ((m % 2) == 0) {
        m = m / 2;
        k++;
        if ((m % 2) != 0){
  	printf("2 ** %d\n", k);
  	k = 0;
        }
      }

      for (i = 3; i < M; i += 2) {
        while ((m % i) == 0) {
  	w = 1;
  	k++;
  	m = m / i;
  	if ((m % i) != 0) {
  	  printf("%d ** %d\n", i , k);
  	  k = 0;
  	}
  	if (m == 1) {
  	  break;
  	}
        }

       if((i > sqrt(M)) && (w == 0)){
         printf("%d\n", M);
         break;
       }
      }
    }

  return 0;
}
