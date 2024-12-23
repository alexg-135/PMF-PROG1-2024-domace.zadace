#include <stdio.h>

// Napišite program koji uèitava prirodne brojeve a i b,
// te u rastuæem poretku ispisuje sve cijele brojeve koji
// se nalaze izmeðu a i b (ukljuèivo i a i b), a u zapisu
// s bazom 18 imaju samo znamenke djeljive sa 11. Ispisane
// brojeve odvojite razmacima. Ako takvih brojeva nema,
// program ispisuje poruku "Nema takvih brojeva.". Pazite
// da tekst bude naveden toèno kako piše (bez navodnika)!

//Oprez: može biti a<b ili a>b ili a=b!

int main(void)
{
    int a, b, start, end, i, postoje=0;

    scanf("%d %d", &a, &b);

    start = a < b ? a : b;
    end = a > b ? a : b;

    for(i = start;i<=end;i++)
    {
        int c=i, o, samo=1;
        while(c != 0)
        {
            o = c % 18;
            c /= 18;

            if(o != 11 && o != 0) samo = 0;

            if(c == 0 && samo == 1)
            {
                if(postoje > 0) printf(" ");
                printf("%d", i);
                postoje++;
            }

        }
    }

    if(postoje == 0) printf("Nema takvih brojeva.");

    return 0;
}
