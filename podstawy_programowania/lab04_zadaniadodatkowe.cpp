#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int wyswietlenieWiekszej(int a, int b) {
    return (a < b) ? b : a;
}
void dzielniki(int n){
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0) cout << i << endl;
    }
    cout << n;
}
int potega_a_do_b(int a, int b){
    int suma = 1;
    for (int i=1; i <= b; i++){
        suma *= a;
    }
    return suma;
}
int potega_a_do_b_Biblioteka(int n) {
    return pow(2, n);
}

int silnia(int n){
    int suma = n;
    for (int i = n-1; i >= 2; i--){
        suma *= i;
    }
    return suma;
}
void losowanieSzczesliwego(int szczesliwy) {
    if (szczesliwy < 1 || szczesliwy > 10) {
        cout << "zly przedzial\n";
        return;
    }
    int licznik = 0;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        int wylosowana = rand() % 10 + 1;
        cout << "wylosowano: " << wylosowana << endl;
        if (wylosowana == szczesliwy) licznik++;
    }
    double procent = (licznik / 10.0) * 100;
    cout << "numer pojawil sie: " << licznik << " razy\n";
    cout << "jest to " << procent << "% wylosowanych liczb\n";
}
int gdyParzysta(int a){
    return a/2;
}
int gdyNieParzysta(int a){
    return ((a-1)/2);
}
int suma(int liczba, int liczba2){
    return liczba + liczba2;
}
int roznica(int liczba, int liczba2){
    return liczba - liczba2;
}
int iloczyn(int liczba, int liczba2){
    return liczba * liczba2;
}
double iloraz(int liczba, int liczba2){
    if (liczba2 == 0) cout << "nie dzielimy przez 0" << endl; return;
    return liczba / liczba2;
}
int main(){
    /*
    //***********************zadanie 1
    int a, b;
    cout << "wprowadz a i b" << endl;
    cin >> a;
    cin >> b;
    cout << ((a == b) ? a : wyswietlenieWiekszej(a, b));
    */
    /*
    //***********************zadanie 2
    int a;
    cout << "podaj liczbe: ";
    cin >> a;
    dzielniki(a);
    */
    //***********************zadanie 3
    /*
    float liczba1, liczba2; 
    int ktoreDzialanie;
    bool czyZakonczycDzialanie = true;
    while(czyZakonczycDzialanie){
    cout << "wybierz dzialanie ktore chcesz wykonac 1-suma, 2-roznica, 3-iloczyn, 4-iloraz\n";
    cin >> ktoreDzialanie;
    cout << "wprowadz liczby\n";
    cin >> liczba1;
    cin >> liczba2;
    switch (ktoreDzialanie)
    {
    case 1:
        cout << suma(liczba1, liczba2) << endl;
        break;
    case 2:
        cout << roznica(liczba1, liczba2) << endl;
        break;
    case 3:
        cout << iloczyn(liczba1, liczba2) << endl;
        break;
    case 4:
        cout << iloraz(liczba1, liczba2) << endl;
        break; 
    default:
        cout << "podano zle wartosci";
        break;
        }
    }
    */
    //***********************zadanie 4
    /*
    int a, b;
    cout << "podaj a i b" << endl;
    cin >> a;
    cin >> b;
    cout << "a^b to: " << potega_a_do_b(a, b);
    /*

    //***********************zadanie 5
    /*
    int a;
    cout << "wprowadz a: \n";
    cin >> a;
    cout << "\na! to: " << silnia(a);
    */
    //***********************zadanie 6
    /*
    //do wykonania czesci tego zadania mozna uzyc funkcji z zadania nr 4.
    int n;
    cout << "wprowadz n:" << endl;
    cin >> n;
    cout << "dzialania na petlach -> " << potega_a_do_b(2,n) << endl;
    cout << "dzialanie na bibliotece -> " << potega_a_do_b_Biblioteka(n);
    */

    //***********************zadanie 7
    /*
    int n;
    cout << "podaj numer: ";
    cin >> n;
    losowanieSzczesliwego(n);
    */
    //***********************zadanie 8
    /*
    for (int i = 1; i<=100; i++){
        if (i%2==1) cout << gdyNieParzysta(i) << endl;
        else cout << gdyParzysta(i) << endl;
    }
    */
    return 0;
}