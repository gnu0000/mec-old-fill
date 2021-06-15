/*
 *
 * fill.c
 * Tuesday, 11/21/1995.
 *
 */

#include <GnuType.h>
#include <stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[])
   {
   FILE *fp;
   int i;
   char pszBuffer[1000];

   fp = fopen ("fill.dat", "wb");

   while (1)
      {
      for (i=0; i<1000; i++)
         pszBuffer[i] = (CHAR) rand ();
   
      fwrite (pszBuffer, 1, 1000, fp);
      }

   return 0;
   }

