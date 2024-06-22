#include <stdio.h>
#include <math.h>

#define N 100000

int
main(void)
{
  //２項の和を計算した
  double a = 0;
  double b = 0;
  int c = 0;
  int d = 0;

  c = N / 2;
  //Nが奇数かどうかを調べる
  d = N % 2;
  for (int i = 0; i < c; i++) {
    b = b + 2 /((4 * a + 1) * (4 * a + 3));
    a = a + 1.0;
  }
  //Nが奇数のとき意味を持つ
  b = b +(d * (pow(-1,N)/(2 * N - 1)));
 
  printf("calc \t= %.10f\n", b);
  printf("M_PI/4 \t= %.10f\n", M_PI/4);
  printf("dif \t= %.10f\n", fabs(b - M_PI/4));

  return 0;
}
