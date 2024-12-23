#include <stdio.h>
#include <math.h>

// Napišite program koji uèitava prirodne brojeve a i b,
// te u rastuæem poretku ispisuje sve cijele brojeve oblika
// 4*5^i-62 koji se nalaze izmeðu a i b (bez a i b). Ispisane
// brojeve odvojite razmacima. Ako takvih brojeva nema,
// program ispisuje poruku "Nema takvih brojeva.". Pazite da
// tekst bude naveden toèno kako piše (bez navodnika)!

// Oprez: može biti a<b ili a>b ili a=b!

int main(void)
{
    int a, b, start, end, i, brojac = 0;

    scanf("%d %d", &a ,&b);

    start = a < b ? a : b;
    end = a > b ? a : b;

    for(i = 2;4*pow(5,i)-62 < end;i++)
    {
        int br = 4*pow(5,i)-62;
        if(start < br)
        {
            if(brojac > 0) printf(" ");
            printf("%d", br);
            brojac++;
        }
    }

    if(brojac == 0) printf("Nema takvih brojeva.");

    return 0;
}
