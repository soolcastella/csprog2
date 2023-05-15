/* ここに自分の名前を入れる */
#include <stdio.h>

void shift_num(int *num1, int *num2, int *num3);

int main(void)
{
    int n1, n2, n3;

    n1 = 6; n2 = 2; n3= -8;
    shift_num(&n1, &n2, &n3);
    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);

    shift_num(&n1, &n2, &n3);
    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);

    shift_num(&n1, &n2, &n3);
    printf("n1: %d, n2: %d, n3: %d\n", n1, n2, n3);

    return 0;
}

void shift_num(int *num1, int *num2, int *num3)
{
    int *i;
    i = num3;
    num3 = num2;
    num2 = num1;
    num1 = i;
}
