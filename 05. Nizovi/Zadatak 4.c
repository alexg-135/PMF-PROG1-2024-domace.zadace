#include <stdio.h>

// Napišite program koji uèitava prirodni broj n<131,
// te niz od n cijelih brojeva. Program treba pronaæi
// najveæi element niza djeljiv s 19, te u originalnom
// poretku ispisati indekse onih elementa niza kojima
// je prva znamenka jedna od znamenki pronaðenog maksimuma.

// Ako traženi maksimum ne postoji, program ne smije ništa
// ispisati. Ispisane brojeve odvojite razmacima.

int main(void)
{
    int n, i, postoji = 0, max, prvi = 1;

    scanf("%d", &n);

    int niz[n];

    for(i = 0;i<n;i++)
    {
        scanf("%d", &niz[i]);
        if(niz[i] % 19 == 0 && niz[i] != 0)
        {
            if(postoji == 0) max = niz[i];
            max = niz[i] > max ? niz[i] : max;
            postoji = 1;
        }
    }

    if(postoji == 0 || max == 0) return 0;

    for(i = 0;i<n;i++)
    {
        int prva_znamenka = niz[i] >= 0 ? niz[i] : -niz[i];
        while (prva_znamenka >= 10) prva_znamenka /= 10;

        int br = max >= 0 ? max : -max;
        while(br > 0)
        {
            if(br % 10 == prva_znamenka)
            {
                if(prvi==0) printf(" ");
                printf("%d", i);
                prvi = 0;
                break;
            }
            br /= 10;
        }
    }

    return 0;
}
