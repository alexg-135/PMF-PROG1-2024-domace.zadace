#include <stdio.h>

// Napišite program koji uèitava 6 cijelih brojeva,
// te ispisuje svakog koji je djeljiv s prethodno
// upisanim (prvi se nikad ne ispisuje). Ispisane
// brojeve odvojite razmacima (program ih smijete
// ispisivati i za vrijeme uèitavanja), a ako traženih
// brojeva nema, program ne smije ništa ispisati.

// Uputa: Program riješite pomoæu petlje (iako se može
// i uèitavanjem 6 varijabli). Pazite na dijeljenje s nulom!

int main(void)
{
   int n1, n2, i;
   int ii = 0;

   for (i = 0;i < 6;i++){
       scanf("%d", &n2);


       if(n1 != 0 && i > 0)
       {
           if(n2 % n1 == 0)
           {
               if (ii != 0) printf(" ");
               printf("%d", n2);
               ii++;
           }
       }

       n1 = n2;
   }

   return 0;
}
