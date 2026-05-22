// Vezba14b.cpp : This file contains the 'main' function. Program execution begins and ends there.
// DO petlja - pietlja sa uslovom na dnu
// Korisnik unosi cene artikala dok ne unese 0 
// (dok ne unese n)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	float cena, ukupno = 0, max=0; // max-trenutno najvisa cena
	char dalje;
	i = 0;
	do
	{
		// unos
		printf("Unesi cenu %d. artikla:\n", i+1);
		scanf("%f", &cena);
		// obrada
		ukupno += cena;
		i++;
		if (cena > max)
			max = cena;
		// priprema za sledeci unos
		printf("Da li hoces dalje (d/n):\n");
		scanf(" %c", &dalje);
	}
	while (dalje == 'd');
	printf("Uneli ste %d cena.\n", i);
	printf("Ukupna cena je %.2f.\n", ukupno); 
	printf("Prosecna cena je %.2f.\n", ukupno / i);
	printf("Najvisa cena je %.2f.\n", max);
}
