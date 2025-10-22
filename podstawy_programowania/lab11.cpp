#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
bool czyParzysta(int liczba){
    if (liczba % 2 == 0 ) return true; 
    else return false; 
}
struct dane_osobowe {
    char imie[20];
    int wiek;
};
int main() {
    //****************zadannie1 
    /*
    string nazwaPliku, linia;
    cout << "podaj nazwe pliku: ";
    cin >> nazwaPliku;
    ifstream plik(nazwaPliku); 
    if (!plik) {
        cout << "blad otwarcia pliku" << endl;
        return 1;
    }
    cout << "zawartosc: " << endl;
    while (getline(plik, linia)) {
        cout << linia << endl;
    }
    plik.close();
    */
    //****************zadannie2
    /*
    ifstream plik("liczby.txt");
    if (!plik.is_open()) {
        cerr << "nie mozna otworzyc" << endl;
        return 1;
    }
    int tab[10];
    int i = 0;
    while (i < 10 && (plik >> tab[i])) {
        i++;
    }
    plik.close();
    cout << "Odczytane liczby:\n";
    for (int j = 0; j < i; j++) {
        cout << tab[j] << " ";
    }
    */
    //****************zadannie3
    /*
    int liczba;
    ofstream plikWynikowy("lab11zad3Wynikowy.txt");
    ifstream mojPlik("lab11zad2.txt");
    if (!mojPlik) {
        cout << "blad otwarcia pliku" << endl;
        return 1;
    }
    if (!plikWynikowy) {
        cout << "blad otwarcia pliku" << endl;
        return 1;
    }
    while (mojPlik >> liczba) {
        if (czyParzysta(liczba) == true){
            plikWynikowy << liczba << endl;
        }
    }
    */
    //****************zadannie4
    struct dane_osobowe osoby[2];
    for (int i=0;i<2;i++) {
        printf("Podaj imie osoby %d: ", i + 1);
        scanf("%s", osoby[i].imie);
        printf("Podaj wiek osoby %d: ", i + 1);
        scanf("%d", &osoby[i].wiek);
    }
    FILE *plik = fopen("plik.csv", "w");
    if (plik == NULL) {
        printf("blad otwarcia pliku!\n");
        return 1;
    }
    fprintf(plik, "id;imie;wiek;\n");
    for (int i = 0; i < 2; i++) {
        fprintf(plik, "%d;%s;%d;\n", i, osoby[i].imie, osoby[i].wiek);
    }
    fclose(plik);
    printf("zapisano do pliku\n");
    return 0;
}

