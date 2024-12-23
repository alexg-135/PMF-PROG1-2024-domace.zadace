#include <stdio.h>

// Napišite program koji učitava dva realna broja x i y, te ispisuje vrijednost izraza
//
// f = {
//      x^3+y^2, za x≥2y
//      x^2−y^3, za x<2y.
//
// Rezultat obavezno ispišite koristeći format %g!

int main(void)
{
    float x, y;

    scanf("%f %f", &x, &y);
    if(x < 2*y)
    {
       printf("%g", x*x - y*y*y);
    }
    else
    {
        printf("%g", x*x*x + y*y);
    }

    return 0;
}
