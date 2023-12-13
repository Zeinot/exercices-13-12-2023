#include <stdio.h>
int main()
{
    for (int j = 1; j <= 9; j++)
    {
        printf("-----------%d-----------\n", j);
        for (int i = 1; i <= 9; i++)
            printf("%d*%d=%d\n", i, j, i * j);
    }
    int r;
    printf("tapez 1 pour relancer > ");
    scanf("%d", &r);
    if (r == 1)
        main();
}