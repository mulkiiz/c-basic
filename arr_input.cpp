#include<stdio.h>
int main ()
{
 /* Kamus */
  int Tab [5];
  int i; 
  /* baca isi Tab */
  for (i=0; i<5; i++) {
     scanf ("%d", &Tab[i]); //pasangan dari scanf, pasti &{nama_var}
  }  
 
  /* menuliskan isi Tab berderet ke kanan*/
  for (i=0; i<5; i++) {
     printf ("Tab[%d]= %d ;", i,  Tab[i]); //cetak nilai var sebanding dengan nilai %d atau %{scope_typedata}
  }
  printf ("\n");
  
  return 0;
}