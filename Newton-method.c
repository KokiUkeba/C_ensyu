#include<stdio.h>
#include<math.h>

int
main(void){
  double x, delta = 1.0e-7;
  double f;

  x = 1.0;
  while (fabs(f = ((x - 2.0) * x - 3.0) * x + 3.0) >= delta) {
    x -= f / (((3.0 * x) - 4.0) * x - 3.0);
  }
  printf("%e\n", x);

  return 0;
}