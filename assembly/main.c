#include <stdio.h>
#include <stdlib.h>

extern char DTD_DATA_begin;
extern char DTD_DATA_end;
extern size_t DTD_DATA_len;


int main(int argc, char *argv[])
{
	char *p = &DTD_DATA_begin;

	size_t len = *(&DTD_DATA_len);
	printf("len: %d\n", len);
	printf("len2: %d\n", &DTD_DATA_end - &DTD_DATA_begin);
	FILE *f = fmemopen(p, len, "r");
	if (f == NULL) {
		perror("open");
		return -1;
	}

	char c;
	while((c = fgetc(f)) != feof(f))
		printf("%c", c);

	fclose(f);

	return 0;
}
