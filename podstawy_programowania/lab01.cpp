#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    //zadanie 1
    cout << "zadanie 1" << endl;
    string inicjaly = "xxxx    xxxxx\nx  x      x\nxxxx      x\nx  x      x\nxxxx      x\n\n";
    printf("xxxx    xxxxx\nx  x      x\nxxxx      x\nx  x      x\nxxxx      x\n\n");
    cout << inicjaly;
    //zadanie 2
    cout << "zadanie 2" << endl;
    cout << "    *" << endl;
    cout << "   * *" << endl;
    cout << "* *   * *" << endl;
    cout << " *     *" << endl;
    cout << "* *   * *" << endl;
    cout << "   * *" << endl;
    cout << "    *" << endl;

    printf("    *\n");
    printf("   * *\n");
    printf("* *   * *\n");
    printf(" *     *\n");
    printf("* *   * *\n");
    printf("   * *\n");
    printf("    *\n");
    
    //zadanie 3
    cout << "zadanie 3" << endl;
    cout << "lista obecności\n";
    cout << "numer      imie        nazwisko\n";
    cout << "01         Anna        Kowalska\n";
    cout << "02         Maria       Nowak\n";
    cout << "03         Adam        Iksiński\n\n";

    printf("numer      imie        nazwisko\n01         Anna        Kowalska\n02         Maria       Nowak\n03         Adam        Iksiński\n\n");
    
    //zadanie 4
    cout << "zadanie 4" << endl;
    cout << "wersja cin/cout";
    int a, b, suma, iloczyn;
    cout << "\nwprowadz a: ";
    cin >> a;
    cout << "\nwprowadz b: ";
    cin >> b;
    suma = a+b;
    iloczyn = a*b;
    cout << "suma: " << suma  << "\niloczyn: " << iloczyn;

    cout << "\nwersja z printf\n";
    int a2, b2, suma2, iloczyn2;
    printf("wprowadz a");
    scanf("%d", &a2);
    printf("wprowadz b");
    scanf("%d", &b2);
    suma = a+b;
    iloczyn = a*b;
    printf("suma to: %d \niloczyn to: %d\n", suma, iloczyn);
    //wersja float -> wystarczy zamienic z int na float, zmienic w printf na %f 
    //i wprowadzac a,b jako floaty np. 4.5

    //zadanie 5
    cout << "zadanie 5" << endl;
    int f;
    cout << "wprowadz ilosc stopni fahrenheita" << endl;
    cin >> f;
    int c;
    c = 5*(f-32)/9;
    //wersja cout - cout << f << " stopni fahrenheita to " << c << "stopni celsjusza" << endl;
    printf ("%d stopni Fahrenheita to %d stopni Celsjusza", f,c);

    return 0;
}