#include <stdio.h>
#include <stdbool.h>
#include <math.h>

struct complex_struct {
    double x, y;
};

double angle(struct complex_struct z) {
    z.y = 14;
    return z.y + z.x;
}

struct rational {
    int i,y;
};

rational make_rational(int a, int b) {
    rational z;
    z.i = a;
    z.y = b;
    return z;
}

rational add_rational(rational a, rational b) {
    rational z;
    z.i = a.i+b.i;
    z.y = a.y+b.y;
    return z;
}

rational print_rational(rational z) {
    int number = (z.i>z.y?z.y:z.i);
    bool flag = 0;

    for(int num = 2; num <= number; num++) {
        if (z.i%num == 0 && z.y%num == 0) {
            flag = 1;
            z.i = z.i/num;
            z.y = z.y/num;
            return print_rational(z);
        }
    }
    if (flag == 0) {
        return z;
    }
}
int main(void)
{
    rational z1 = {222, 458}, z2 = {20, 80};
    rational zz = print_rational(add_rational(z1, z2));
    printf("%d\t%d\n", zz.i, zz.y);

}
