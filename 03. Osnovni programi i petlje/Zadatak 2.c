#include <stdio.h>

// Napišite program koji uèitava tri realna broja x, y i z, te ispisuje vrijednost izraza
//      f = m^3 + M^2,
//
// pri èemu je
//      m = min{x,y,z} i M = max{x,y,z}.
//
//
// Rezultat obavezno ispišite koristeæi format %g!

float min2(float n1, float n2)
{
    if(n1 <= n2)
    {
        return n1;
    }
    return n2;
}
float min3(float n1, float n2, float n3)
{
    return min2(min2(n1, n2), n3);
}

float max2(float n1, float n2)
{
    if(n1 >= n2)
    {
        return n1;
    }
    return n2;
}
float max3(float n1, float n2, float n3)
{
    return max2(max2(n1, n2), n3);
}

int main(void)
{
   float x, y, z, m, M;

   scanf("%f %f %f", &x, &y, &z);

   m = min3(x, y ,z);
   M = max3(x, y ,z);

   printf("%g", m*m*m + M*M);
   return 0;
}
