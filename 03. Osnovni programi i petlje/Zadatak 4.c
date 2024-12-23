#include <stdio.h>

// Napi�ite program koji u�itava 9 realnih brojeva,
// te ispisuje umno�ak broja koji ima najve�u
// apsolutnu vrijednost s brojem koji ima najmanju
// apsolutnu vrijednost. Ako dva broja imaju jednaku
// apsolutnu vrijednost, za ve�eg/manjeg uzimate onog
// koji je prije u�itan.
//
//Rezultat obavezno ispi�ite koriste�i format %g!

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
