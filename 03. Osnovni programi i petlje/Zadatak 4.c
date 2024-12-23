#include <stdio.h>

// Napišite program koji uèitava 9 realnih brojeva,
// te ispisuje umnožak broja koji ima najveæu
// apsolutnu vrijednost s brojem koji ima najmanju
// apsolutnu vrijednost. Ako dva broja imaju jednaku
// apsolutnu vrijednost, za veæeg/manjeg uzimate onog
// koji je prije uèitan.
//
//Rezultat obavezno ispišite koristeæi format %g!

double absf(double n)
{
    if(n<0)
    {
        return -n;
    }
    return n;
}

int main(void)
{
   double n, min, max;
   int i;

   for (i = 0;i < 9;i++){
        scanf("%lf", &n);
        if(i == 0)
        {
            min = n;
            max = n;
        }

        if(absf(min) < absf(n))
        {
            min = min;
        }
        else
        {
            min = n;
        }

        if(absf(max) > absf(n))
        {
            max = max;
        }
        else
        {
            max = n;
        }

   }

   printf("%g", min*max);

   return 0;
}
