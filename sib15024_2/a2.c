#include<stdio.h>

int main(void)
{

printf("Aufstellung Speichergroessen:\n\n");
printf("===============================\n");
printf("Speichergroesse Character:%5d\n", sizeof(char));
printf("Speichergroesse Short:%9d\n", sizeof(short)); 
printf("Speichergroesse Integer:%7d\n", sizeof(int)); 
printf("Speichergroesse Long:%10d\n", sizeof(long)); 
printf("Speichergroesse Float:%9d\n", sizeof(float)); 
printf("Speichergroesse Double:%8d\n", sizeof(double)); 
printf("Speichergroesse Long Double:%3d\n", sizeof(long double));

return 0;
}