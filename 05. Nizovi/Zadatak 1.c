#include <stdio.h>

// Napišite program koji uèitava prirodni broj n<71,
// te niz od n cijelih brojeva. Program treba u
// originalnom poretku ispisati sve elemente x[i] niza
// takve da je ostatak pri dijeljenju apsolutne
// vrijednosti x[i] s 18 jednak ostatku koji pri istom
// takvom dijeljenju daje najmanji od uèitanih brojeva.

// Ispisane brojeve odvojite razmakom.

int main(void)
{
    int n, min, prvi=1;
    scanf("%d", &n);

    int niz[n];

    int i;
    for(i = 0;i<n;i++)
    {
        scanf("%d", &niz[i]);
        if(prvi == 1)
        {
            min = niz[i];
            prvi = 0;
            continue;
        }
        min = niz[i] < min ? niz[i] : min;
    }

    prvi = 1;
    for(i = 0;i<n;i++)
    {
        int abs_n = niz[i] >= 0 ? niz[i] : -niz[i];
        int abs_min = min >= 0 ? min : -min;
        if(abs_n % 18 == abs_min % 18)
        {
            if(prvi != 1) printf(" ");
            printf("%d", niz[i]);
            prvi = 0;
        }
    }

    return 0;
}
