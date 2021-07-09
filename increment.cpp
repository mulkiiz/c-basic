/* File: inkremen.c */
/* Penulis : Bu Dengklek, email inge@bebras.or.id */
/* Deskripsi : */                                               
/* Efek dari operator ++ */
#include<stdio.h>
int main ()
{
/* Kamus */
  int i;
  /* Program */
  i = 3;
  printf ("Nilai i :%d %d\n", i, i++);
  i = 3;
  printf ("%d\n", ++i); /* sebelum dicetak, nilai i ditambah 1 */
 // operasi increment membutuhkan dua cetak %d untuk melihat efek i++
 // namun operasi ++i tidak membutuhkan dua cetak %d, karena sebelum dieksekusi nilai sudah ditambah
  return 0;
}