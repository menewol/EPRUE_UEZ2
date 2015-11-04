#include<stdio.h>

int main(void)
{
	int x = 98;
	int k = 0;
	short i1 = -273;
	unsigned short i2 = -1;
	short i3 = 65535; 
	float p1 = 3.141592653589793;
	double p2 = 3.141592653589793;
	double dl = 534.7456e+10;


	k = printf("x hat den Wert %c\t\r\b\n", x);
	/*	
	*	Ausgabe: x hat den Wert b (Tab)(Carriage Return)(Backspace)(New Line) 
	*	Begruendung: Da die int Variable x mit der Formatumwandlung %c ausgegeben wird, wird der Integerwert als ASCII-Zeichen ausgegeben (b => 98).
	*	Die int Variable k enthaelt die Anzahl der ausgegebenen Zeichen auf die Konsole. (Rueckgabewert der printf-Funktion = Anzahl der auf die Konsole geschriebenen Zeichen)
	*/

	printf("%X\n", k); 
	/*
	*	Ausgabe: 14.
	*	Begruendung: Die int Variable k wird bei der Ausgabe durch den Formatumwandler %X in Hexadezimal ausgegeben 
	*/

	printf("i1 = %d, i1 = %hu\n", i1, i1);
	/*
	*	Ausgabe: i1 = -273, i1 = 65263 (New Line)
	*	Begruendung: 
	*	i1 wird zuerst mit dem Formatumwandler %d als Zahl ausgegeben. 
	*	i1 wird dann mit dem Formatumwandler %hu als Zahl vom Datentyp unsigned short ausgegeben. 
	*	unsigned bedeutet OHNE Vorzeichen, dementsprechend uebersteigt -273 den Wertebereich einer unsigned short Variable
	*/

	printf("i2 = %d, i2 = %d\n", i2, i3);
	/*
	*	Ausgabe: i2 = 65535, i2 = -1 (New Line)
	*	Begruendung: Die Variable i2 ist vom Datentyp unsigned short, ihr wird jedoch -1 zugewiesen.
	*	Dies bewirkt eine Ueberschreitung des Wertebereichs => i2 wird mit dem Wert USHORT_MAX - 1 initialisiert.
	*	Die Variable i3 ist vom Datentyp short (Wertebereich: -32,768 bis 32,767) und wird mit dem Wert 65535 intialisiert. 
	*	Das verursacht eine Ueberschreitung des Wertebereichs im Datentyp short.
	*/

	printf("%f und %.10f\n", p1, p1);
	/*
	*	Ausgabe: 3.141593 und 3.1415927410 (New Line)
	*	Begruendung: Der Formatumwandler %f behandelt die übergebene Variable als double-Zahl mit 6 Stellen Präzision.
	*	Der Formatumwandler %.10f behandelt die übergebene Variable ebenfalls als double-Zahl jedoch gibt '.10' an das 10 Nachkommastellen ausgegeben werden sollen.
	*/

	printf("%+f und %+.10f und %+.20f\n", p2, p2, p2);
	/*
	*	Ausgabe: +3.141593 und +3.1415926536 und +3.14159265358979310000 (New Line)
	*	Begruendung: Durch den Formatumwandler %+f bzw. durch die verwendete Flag + wird auch bei einem positiven Wert ein Vorzeichen ausgegeben.
	*	Die Formatumwandler %+.10f bzw. %+.20f kombinieren die + Flag mit der Angabe der Nachkommastellen.
	*	Ist die Anzahl der verwendeten Nachkommastellen zur Darstellung höher als Anzahl der Nachkommastellen der übergebenen Variable, so wird das Feld mit Nullen aufgefüllt.
	*/

	printf("%10.2E und %-30.4e\n", dl, dl);
	/*
	*	Ausgabe: 5.35E+012 und 5.3475e+012 (New Line)
	*	Begruendung:
	*	Formatumwandler mit dem Zeichen %e oder %E verursachen die Darstellung als Gleitkommazahl in folgendem Format: d.dd
	*	Der Formatumwandler %10.2E interpretiert die Variable dl nach folgendem Schema:
	*	10 Zeichen werden für die Feldbreite verwendet, die Nachkommastellen werden auf 2 Stellen gekürzt & die Darstellung soll als double erfolgen.
	*	Die - Flag im zweiten Formatumwandler richtet den Text im Feld linksbündig aus. 
	*	30 Zeichen werden für die Feldbreite verwendet, die Nachkommastellen werden auf 4 Stellen gekürzt & die Darstellung soll als double erfolgen.
	*/
	return 0;
}