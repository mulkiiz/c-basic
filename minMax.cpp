#include<stdio.h>
int main ()
{/* Kamus : */
  int i;
//   int x;
  int Tab[10]= { 2, 50 , 6 , 200, 3, 100, 30, 8, 99, 100 };
  int max;
  int min;
  /* Algoritma */
  max = Tab[0];
  min = Tab[0];
  
  for (i=1;i< 10; i++)  {
     if (Tab[i] > max) {
        max = Tab[i];
     }
     if (Tab[i] < min) {
        min = Tab[i];
     }
  } 
  printf ("Nilai Max= %d \n", max); 
  printf ("Nilai Min= %d \n", min);  
  printf ("Nilai Median= %d \n", (min+max)/2);  
  
  return 0;
}