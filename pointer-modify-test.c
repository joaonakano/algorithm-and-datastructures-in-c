#include <stdio.h>

int main() {
    int x = 5;
    int y = 10;

    printf("%d %d \n", x, y);

    swap2(&x, &y);

    printf("%d %d", x, y);

    return 0;
}

int swap2(int *x, int *y)
{
    int tmp;
    tmp = *x; *x = *y; *y = tmp;
    return;
}