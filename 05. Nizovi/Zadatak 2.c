#include <stdio.h>

// Napišite program koji uèitava prirodni broj n<71,
// te niz od n prirodnih brojeva. Program treba
// (u originalnom poretku) bez zadnje znamenke ispisati
// one brojeve kojima je zadnja znamenla jednaka 1.
// Ako takvih brojeva nema, program ne smije ništa
// ispisati. Ispisane brojeve odvojite razmacima.

//Na primjer, za niz brojeva 171, 188, 191, 208, 218, 229, 231, 248 ispisati "17 19 23".

int main(void)
{
    int n, i, prvi = 1
    ;
    scanf("%d", &n);

    int niz[n];

    for(i = 0;i<n;i++)
    {
        scanf("%d", &niz[i]);
    }

    for(i = 0;i<n;i++)
    {
        if(niz[i] % 10 != 1) continue;

        if(prvi != 1) printf(" ");
        printf("%d", niz[i] / 10);
        prvi = 0;
    }

    return 0;
}
