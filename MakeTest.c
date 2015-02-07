#include<stdlib.h>
#include<stdio.h>

void
main(int argc, char **argv)
{
  //variables
  int i;
  FILE *f;
  //ops
  f = fopen("test.txt","w");
  for(i = 0;i < 100000000;i++){
    if(i == 1 || i == 150 || i == 175000|| i == 13000 || i == 1000000)
	fprintf(f,"3\n");
    else fprintf(f,"2\n");
    if(i % 50000 == 0) fprintf(f,"1\n");
  }
  fprintf(f,"1\n0\n");
}
