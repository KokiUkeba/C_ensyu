#include<stdio.h>
#include<math.h>

int main(void)
{
    float a, b, c;
    double disc;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    printf("%.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);
    
    //二次方程式かどうかを判定
    if (a != 0.0) {
        disc = b * b - 4.0 * a * c;

        //異なる二つの実数解を持つ場合
        if (disc > 0.0) {
            printf("%.1e, %.1e\n", (-b + sqrt(disc)) / (2.0 * a),
                                   (-b - sqrt(disc)) / (2.0 * a));
        }
        //異なる二つの複素数解を持つ場合
        else if (disc < 0.0) {
            printf("%.1e + I * %.1e, %.1e - I * %.1e\n",
                -b / (2.0 * a), sqrt(-disc) / (2.0 * a),
                -b / (2.0 * a), sqrt(-disc) / (2.0 * a));
        }
        //重解を持つ場合
        else {
            printf("double root %.1e\n", -b / (2.0 * a));
        }
    }
    //一次方程式かどうかを判定
    else if (b != 0.0) {
        printf("single root %.1e\n", -c / b);
    }
    //与えられた方程式が成立するか判定
    else if (c == 0.0) {
        printf("arbitrary number\n");
    }
    else {
        printf("no solution\n");
    }

    return 0;
}
