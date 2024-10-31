#define _CRT_SECURE_NO_WARNINGS //Vermeidung von Microsoft spezifischen Meldungen
#include "auswahl.h" //Header-Datei zur Auswahl zwischen verschiedenen Codes
#include <stdio.h>

#if aufgabe==2 //Aufgabe 2: Gerade und ungerade Zahlen
int main(){

	unsigned int eingabe; //Variable für die Eingabe des Users

	printf("Bitte geben Sie eine positive ganze Zahl ein: "); //Eingabeaufforderung
	scanf("%u", &eingabe);
	if (eingabe % 2 == 0) { //Zahl durch 2 ohne Rest teilbar -> Zahl ist gerade
		printf("Die Zahl ist gerade");
	}
	else {
		printf("Die Zahl ist ungerade");
	}

	return 0;
}
#endif

#if aufgabe==3 //Aufgabe 3: Auf Primzahl prüfen
int main() {

	unsigned int eingabe; //Variable für die Eingabe des Users
	unsigned int teiler = 2; //Fortlaufende Variable mit der die eingegebene Zahl geteilt wird

	printf("Bitte geben Sie eine positive ganze Zahl ein: "); //Eingabeaufforderung
	scanf("%u", &eingabe);
	while (eingabe % teiler != 0) {
		teiler = teiler++; //Zählt den Teiler solange hoch, bis die eingegebene Zahl restlos durch ihn teilbar ist
	}
	if (teiler == eingabe) { //Wenn der gefundene Teiler die Zahl selbst ist, ist sie eine Primzahl
		printf("Die Zahl ist eine Primzahl");
	}
	else {
		printf("Die Zahl ist keine Primzahl");
	}
	return 0;
}
#endif

#if aufgabe==4 //Aufgabe 4: Liste von Primzahlen
int main() {

	unsigned int eingabe; //Variable für die Eingabe des Users
	unsigned int teiler = 2; //Fortlaufende Variable mit der die Zahlen bis zur eingegebenen Zahl geteilt werden
	unsigned int dividend; //Fortlaufende Variable die geteilt wird

	printf("Bitte geben Sie eine positive ganze Zahl bis 1000 ein: "); //Eingabeaufforderung
	scanf("%u", &eingabe);
	if (eingabe > 1000) { //Die Zahl soll nicht größer als 1000 sein
		printf("Eingabe zu gross");
	}
	else {
	for (dividend = 2; dividend <= eingabe; dividend++) {
		while (dividend % teiler != 0) {
			teiler = teiler++; //Zählt den Teiler solange hoch, bis die eingegebene Zahl restlos durch ihn teilbar ist
		}
		if (teiler == dividend) { //Wenn der gefundene Teiler die Zahl selbst ist, ist sie eine Primzahl
			printf("%u\n", dividend);
		}
		teiler = 2; //setzt den Teiler wieder auf Startwert
	}
	}
	return 0;
}
#endif