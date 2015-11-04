#include<stdio.h>

int j = 5;

int fkt2(int j) 
{
	j = 200;

	//printf("i = %d, j = %d\n", i, j);

	/*
	*	Ausgabe nicht moeglich da die int-Variable i weder im local-Scope noch im global-Scope definiert ist.
	*	Kompiliervorgang erzeugt folgenden Fehler: "error C2065: 'i': nichtdeklarierter Bezeichner"
	*/

	
}

void fkt1(int i)
{
	i = 100;
	printf("i = %d, j = %d\n", i, j);
	/*
	*	Ausgabe: i = 100, j = 5
	*	Zur Ausgabe der int-Variable i wird die im formal-Scope definierte Variable verwendet.
	*	Die int-Variable j ist global definiert, wird daher zur Ausgabe herangezogen.
	*/

	fkt2(j);

	printf("i = %d, j = %d\n", i, j);
	/*
	*	Ausgabe: i = 100, j = 5
	*	Zur Ausgabe der int-Variable i wird die im formal-Scope definierte Variable verwendet.
	*	Die int-Variable j ist global definiert, wird daher zur Ausgabe herangezogen.
	*/

	j = j + 5;
}

int main(void) //Schluesselwort "void" war im Original-Code nicht enthalten. Wurde der Ordentlichkeit halber ergaenzt
{
	int i = 10;
	printf("i = %d, j = %d\n", i, j);
	/*
	*	Ausgabe: i = 10, j = 5
	*	Die int-Variable i ist lokal definiert, int j ist im global-Scope definiert.
	*/
	fkt1(i);
	printf("i = %d, j = %d\n", i, j);
	/*
	*	Ausgabe: i = 10, j = 10
	*	Die int-Variable i ist im lokalen Scope definiert.
	*	Die globale definierte int-Variable j wurde von fkt1 um den Wert 5 erhoeht und beim Ruecksprung in die main-Funktion auch zur Ausgabe verwendet.
	*	
	*/

	return 0; // return-Wert war im Original-Code nicht enthalten. Wurde der Ordentlichkeit halber ergaenzt
}
