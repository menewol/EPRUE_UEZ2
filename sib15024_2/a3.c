#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{

printf("Uebersicht Elementare Datentypen\n\n");
printf("============================================\n");
printf("\t\tUntergrenze\tObergrenze\n");
printf("============================================\n");
printf("char:\t\t%11d bis %10d\n",SCHAR_MIN, SCHAR_MAX);
printf("unsigned char:\t\t  0 bis %10d\n",UCHAR_MAX);
printf("short:\t\t%11d bis %10d\n",SHRT_MIN, SHRT_MAX);
printf("unsigned short:\t\t  0 bis %10d\n", USHRT_MAX);
printf("int:\t\t%11d bis %10d\n", INT_MIN, INT_MAX);
printf("unsigned int:\t\t  0 bis %10u\n",ULONG_MAX);
printf("long:\t\t%11d bis %10d\n", LONG_MIN, LONG_MAX);
printf("unsigned long:\t\t  0 bis %10u\n", ULONG_MAX);
printf("float:\t\t%11.3e bis %10.3e\n", FLT_MIN, FLT_MAX);
printf("double:\t\t%11.3e bis %10.3e\n", DBL_MIN, DBL_MAX);
printf("long double:\t%11.3e bis %10.3e\n", LDBL_MIN, LDBL_MAX);


return 0;

}

/*
*	Antwort zu 3b)

*	The size of all of the basic types is implementation defined, with minimums. 
*	In particular, all that you are guaranteed is that double doesn't have less precision and range than float, and that long
*	double doesn't have less precision and range than double.
*	
*	From: http://stackoverflow.com/questions/8922216/why-are-double-and-long-double-completely-the-same-on-my-64-bit-machine
*	
*	Microsoft hat eigenmaechtig festgelegt die Datentypen double und long double ident zu interpretieren.
*	Ein Blick in die MSDN C-Library Reference (Size Specification) zeigt: 
*	
*	"[...] although long double is a distinct type, it has the same internal representation as double."
*
*	From: https://msdn.microsoft.com/en-us/library/tcxf1dw6.aspx
*/