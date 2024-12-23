#include <stdio.h>

// Napi�ite program koji u�itava 6 cijelih brojeva,
// te ispisuje svakog koji je djeljiv s prethodno
// upisanim (prvi se nikad ne ispisuje). Ispisane
// brojeve odvojite razmacima (program ih smijete
// ispisivati i za vrijeme u�itavanja), a ako tra�enih
// brojeva nema, program ne smije ni�ta ispisati.

// Uputa: Program rije�ite pomo�u petlje (iako se mo�e
// i u�itavanjem 6 varijabli). Pazite na dijeljenje s nulom!

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
