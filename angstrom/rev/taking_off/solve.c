#include <stdio.h>

char pass[18] = {
	0x5a,  0x46,  0x4f,  0x4b,  0x59,  0x4f,  0x0a,  0x4d, 
	0x43,  0x5c,  0x4f,  0x0a,  0x4c,  0x46,  0x4b,  0x4d,
	0x2a,  0x00
	};

void main()
{
	int i;
	for(i = 0; i < 17; i++)
		printf("%c", pass[i]^0x2a);
	puts(" ");
}