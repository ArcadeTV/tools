#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int ch;
  int value;
  unsigned long int size,i=0;
  FILE *fichier, *lsb, *msb;
  
  printf("Furrtek's LSB/MSB spliter \n");
    if (argc < 4) {
       printf("Usage: \"split file LSB MSB\"\n");
       printf("Gives LSB and MSB\n");     
       return 1;
    }

  fichier = fopen(argv[1],"rb");
  lsb = fopen(argv[2],"wb");
  msb = fopen(argv[3],"wb");
  	if ((!fichier)||(!lsb)||(!msb)) {
       printf("Can't open a file.");
       return 1;
    }
    fseek(fichier, 0, SEEK_END);
    size = ftell(fichier);
    fseek(fichier, 0, SEEK_SET);

    while(i < size) {
      ch = getc(fichier);
      putc(ch,lsb);
      ch = getc(fichier);
      putc(ch,msb);
      i+=2;
    }
    printf("Done.\n");
  fclose(fichier);
  fclose(lsb);
  fclose(msb);
  return 0;
}
