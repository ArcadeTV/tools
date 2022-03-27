#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *filename;
  long int padto;
  long int padsize;
  long int origine;
  int value;
  FILE *fichier;
  
  printf("Furrtek's file padder\n");
    if (argc < 3) {
       printf("Usage: \"pad file bytes\"\n");     
       return 1;
    }

  filename = argv[1];
  padto = atol(argv[2]);
  value = atoi(argv[3]) & 0xFF;
  fichier = fopen(filename,"a");
  	if (!fichier) {
       printf("Can't open file.");
       return 1;
    }
  origine = ftell(fichier);
  fseek(fichier,0,SEEK_END);
  padsize = padto - ftell(fichier);
  if (padsize > 0) {
    printf("Padding %s to %i bytes with %i.\n",filename,padto,value);
    fseek(fichier,origine,SEEK_SET);
    while (padsize>0) {
      putc(value,fichier);
      padsize--;
    }
    printf("Done.\n");
  } else {
    printf("File already has a big ass.\n");
  }
  fclose(fichier);
  return 0;
}
