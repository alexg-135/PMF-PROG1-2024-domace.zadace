#include <stdio.h>

int main(void)
{
    int n, i;
    scanf("%d", &n);

    for(i = 0; i < n;i++)
    {
        int j;
        for(j = 0;j<3;j++)
        {
            int k;
            for(k = 0;k<n-i;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
