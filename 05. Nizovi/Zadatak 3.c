#include <stdio.h>

// Napišite program koji uèitava prirodni broj n<31,
// te niz od n cijelih brojeva. Program treba uèitane
// brojeve ispisati padajuæe sortirano prema sumi
// znamenaka u bazi 6; ako neka dva razlièita broja
// imaju jednaku sumu znamenaka u bazi 6, onda ih
// usporeðujete na uobièajeni naèin.

// Ispisane brojeve odvojite razmacima.

int sum(int n)
{
    int sum = 0;
    n = n >= 0 ? n : -n;
    while(n > 0)
    {
        sum += n % 6;
        n = n / 6;
    }
    return sum;
}

int main(void)
{
    int n, i, prvi = 1;
    ;
    scanf("%d", &n);

    int niz[n];

    for(i = 0;i<n;i++)
    {
        scanf("%d", &niz[i]);
    }

    for(i = 0;i<n-1;i++)
    {
        int n1 = sum(niz[i]);
        int n2 = sum(niz[i+1]);
        if(n1 == n2 && niz[i+1] > niz[i])
        {
            niz[i] += niz[i+1];
            niz[i+1] = niz[i] - niz[i+1];
            niz[i] -= niz[i+1];

            i = -1;
        }
        else if(n2 > n1)
        {
            niz[i] = niz[i] + niz[i+1];
            niz[i+1] = niz[i] - niz[i+1];
            niz[i] = niz[i] - niz[i+1];

            i = -1;
        }
    }

    for(i = 0;i<n;i++)
    {
        if(prvi != 1) printf(" ");
        printf("%d", niz[i]);
        prvi = 0;
    }

    return 0;
}
