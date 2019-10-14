#include <stdio.h>
#include <stdlib.h>

extern char DTD_DATA_begin;
extern char DTD_DATA_end;
extern char DTD_DATA_len;


int main(int argc, char *argv[])
{

	char*  p = &DTD_DATA_begin;
	char *q = &DTD_DATA_end;

	FILE *f = fopen("f.txt", "wb");
	while ( p != q ) {
		fputc(*p, f);
		putchar(*p++);
	}
	fclose(f);
	/* for (int i = 0; i < DTD_DATA_len; i++) { */
	/*	 putchar(*p++); */
	/* } */

	int *l = &DTD_DATA_len;

	printf("\n len: %d\n", *l);

	return 0;
}
