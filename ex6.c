#include <stdio.h>
int main()
{
    int choix, win = 0;

    for (int essaies = 5; essaies > 0; essaies--)
    {
        printf("tapez un entier > ");
        scanf("%d", &choix);
        if (choix == 0)
        {
            win = 1;
            break;
        }
    }
    if (win == 1)
        printf("gagner\n");
    else
        printf("perdu\n");
    int r;
    printf("tapez 1 pour relancer > ");
    scanf("%d", &r);
    if (r == 1)
        main();
}