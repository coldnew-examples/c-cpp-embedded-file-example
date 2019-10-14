#include <stdio.h>
#include <stdlib.h>

/*
 * Generated from command:
 *
 *  xxd -i hello.txt hello.c
 */
extern const unsigned char  ___hello_txt[];
extern const int  ___hello_txt_len;

int main(int argc, char *argv[])
{
	char *start = &___hello_txt;
	for (int i = 0; i < ___hello_txt_len; i++)
		putchar(*start++);

	return 0;
}
