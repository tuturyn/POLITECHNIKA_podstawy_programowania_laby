/*
#include <iostream>
//zadanie 1
using namespace std;
int main (){

    //a) liczba wartosci zwiekszy sie o 1, poniewaz z warunku <= 10, dojdzie nam wlasnie 10
    //b) [5, 7] for (int i = 5; i <= 7; i++) i [5,7) for (int i = 5; i < 7; i++)
    //c) for (int i = 1; i <= 10; i += 2) albo for (int i = 0; i <= 10; i += 2) w zaleznosci od tego ktore chcemy
    //d) for (int i = 10; i > 0; i--)

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }
    //petla for z kodu z zadania wyswietla cyfry od 0 do 9
    return 0;
}
*/
//zadanie 2.
#include <stdio.h>
#include <iostream> 
using namespace std; 
int main () {
    // kod z zadania zapisuje temperature w fahrenheit od 0 do 200 z krokiem co 20 poczym dodaje jego odpowiednik 
    // w celsjuszach w wartosci calkowitej

    /*
    int start, limit, krok, fahr, celsius; //zmienne typu int

    start = 0; //przypisz 0 do start
    limit = 200; //przypisz 200 do limit
    krok = 20; //przypisz 20 do krok

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest < od zmiennej limit
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
        cout << fahr << "t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }
    */

    //zadanie 3
    
    //teraz po zmianie z int na float przy zmiennych otrzymujemy poprawniejsze wyniki.
    float fahr, celsius; //zmienne typu int
    float start, limit, krok; //zmienne typu int

    start = 0; //przypisz 0 do start
    limit = 200; //przypisz 200 do limit
    krok = 20; //przypisz 20 do krok
    for (fahr = start; fahr <= limit; fahr = fahr + krok) { //kod 02_14
        celsius = (5.0 / 9.0)* (fahr- 32.0);
        cout << fahr << "t" << celsius << endl;
        //printf("%3.0f \t%6.1f \n", fahr, celsius);
    }
    // zadanie 5 - jesli zmienimy w rownania (5.0/9.0 na 5/9) to otrzymamy blad z uwagi na roznice w typach zmiennych i zamiast celsjuszy beda same 0
}
//zadania od 7 - 16
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    //zadanie 7
    for(int i=0; i<10; i++){
        float x;
        cin >> x;
        if(x > 0) cout << x << endl;
    }

    cout << "\n";

    //zadanie 8
    for(int i=0; i<=100; i++)
        if(i%2==0) cout << i << " ";

    cout << "\n";

    //zadanie 9
    int n;
    cin >> n;
    for(int i=0; i<=100; i++)
        if(i % n == 0) cout << i << " ";

    cout << "\n";

    //zadanie 10
    int licznik = 0;
    cin >> n;
    for(int i=0; i<=100; i++)
        if(i % n == 0) licznik++;
    cout << licznik << endl;

    cout << "\n";

    //zadanie 11
    int a,b;
    cin >> a >> b;
    if(a < b){
        for(int i=a; i<=b; i++)
            if(i%3==0) cout << i << " ";
    } else {
        for(int i=b; i<=a; i++)
            if(i%3==0) cout << i << " ";
    }
    
    cout << "\n";

    //zadanie 12
    int ile;
    cin >> ile;
    float suma = 0, liczba;
    for(int i=0; i<ile; i++){
        cin >> liczba;
        suma += liczba;
    }
    cout << suma/ile << endl;

    //zadanie 13
    for(int i=100; i>=0; i--)
        cout << i << " ";

    cout << "\n";

    //zadanie 14
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int min = x1;
    if(x2 < min) min = x2;
    if(x3 < min) min = x3;
    cout << min << endl;

    cout << "\n";

    //zadanie 15
    int m;
    cin >> n >> m;
    srand(time(0));
    cout << rand() % (m - n + 1) + n << endl;

    cout << "\n";

    //zadanie 16
    int n, count = 0;
    cin >> n;
    srand(time(0));
    for(int i = 0; i < 10; i++) 
        if(rand()%10 + 1 == n) count++;
    cout << "numer pojawil sie: " << count << " razy \n";

    return 0;
}