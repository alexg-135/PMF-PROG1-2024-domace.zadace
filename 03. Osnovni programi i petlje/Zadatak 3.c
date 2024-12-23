#include <stdio.h>

// Napišite program koji učitava tri realna broja x, y ≠ 0 i z, te ispisuje vrijednost izraza
// f = ∣x^2 / y^3 + z^2 − 17∣.
//Rezultat obavezno ispišite koristeći format %g!

float abs(float n){
    if(n<0){
        return -n;
    }
    return n;
}

int main(void)
{
   float x, y, z;

   scanf("%f %f %f", &x, &y, &z);

   printf("%g", abs((x*x)/(y*y*y) + z*z - 17.0));

   return 0;
}
