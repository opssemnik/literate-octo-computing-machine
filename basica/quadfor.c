/* marco.mangan@pucrs.br*/
#include <stdio.h>

int main(void)
{
    int n;  /* entrada  */
    int i;  /* contador i = 1, 2, 3, ... , n-1, n */
    int j;  /* contador j = 1, 2, 3, ... , n-1, n */

    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
            if ( i == 1 || i == n )
                printf(j == 1 || j == n ? "+": "|");
            else
                printf(j == 1 || j == n ? "-" : " ");
        printf("\n");
    }
    printf("FIM\n");
    return 0;
}

