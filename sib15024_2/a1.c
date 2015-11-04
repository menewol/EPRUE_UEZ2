#include<stdio.h>
#define MULTIPLY(x) x * 1024

int main(void)
{
	long long kb = 1024; /* long long 64-bit breit */
	long long mb = MULTIPLY(kb);
	long long gb = MULTIPLY(mb);
	long long tb = MULTIPLY(gb);
	long long pb = MULTIPLY(tb);

	printf("MEMORY PREFIX SIZES\n\n");
	printf("=============================\n");
	printf("1 Kilobyte = %16lld\n", kb);
	printf("1 Megabyte = %16lld\n", mb);
	printf("1 Gigabyte = %16lld\n", gb);
	printf("1 Terabyte = %16lld\n", tb);
	printf("1 Petabyte = %16lld\n", pb);

	return 0;
}