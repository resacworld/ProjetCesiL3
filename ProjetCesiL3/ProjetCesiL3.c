#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

void main() {
	SetConsoleOutputCP(CP_UTF8);   // affichage en UTF-8
	SetConsoleCP(CP_UTF8);         // saisie (scanf, fgets) en UTF-8

	printf("Hellow world !");
}