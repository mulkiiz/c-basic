#include<stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415
int main ()
{/* Kamus */
  const int maks=3;
  const float param =2.5;
  const char cc = 65 ;
  const char cA = 'Az' ;
  const char Ac = 'zA' ;
 /* Algoritma */
  printf ("PI  = %f\n", pi); //defaul %f akan mencetak 6 digit di belakang koma
  printf ("PI  = %.2f\n", pi); //defaul %.2f akan mencetak 2 digit di belakang koma
  printf ("NOL  = %d\n", NOL);
  printf ("SATU  = %d\n", SATU);
  printf ("FALSE  = %d\n", FALSE);
  printf ("maks  = %d\n", maks);
  printf ("param  = %f\n", param);
  printf ("cc  = %c\n", cc); //%c akan mencetak karakternya, 'A'
  printf ("cc  = %d\n", cc); //%d akan mencetak kode ASCInya, 65
  printf ("cA  = %c\n", cA); //jika ada 2 karakter, maka hanya dibaca 1 karakter paling kanan, z
  printf ("Ac  = %c\n", Ac); //jika ada 2 karakter, maka hanya dibaca 1 karakter paling kanan, A
  printf ("3\n"); /*tanpa memakai nama, tidak disarankan */
  return 0;
}