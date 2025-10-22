#include <iostream>
#include <cmath>
using namespace std;
int main(){

    /*
    //***********************zadanie 1

    int a, b;
    cout << "wprowadz a i b\n";
    cin >> a;
    cin >> b;
    if (a==b) cout << "sa rowne\n";
    else if (a>b) cout << "a jest wieksze\n";
    else cout << "b jest wieksze\n";
    
    //***********************zadanie 2

    if (a == b)
        cout << "sa rowne\n";
    else {
        if (a > b)
            cout << "a jest wieksze\n";
        else
            cout << "b jest wieksze\n";
    }
    */
    /*
    //***********************zadanie 3

    int r;
    cout << "wprowadz r: " << endl;
    cin >> r;
    if (r <= 0.7 && r <= 1) cout << "bardzo silna korelacja dodatnia";
    else if (r >= 0.5) cout << "silna korelacja dodatnia";
    else if (r >= 0.3) cout << "umiarkowana korelacja dodatnia";
    else if (r >= 0.2) cout << "slaba korelacja dodatnia";
    else cout << "brak korelacji";
    */

    /*
    //***********************zadanie 4

    float liczba1, liczba2; 
    int ktoreDzialanie;
    cout << "wybierz dzialanie ktore chcesz wykonac 1-suma, 2-roznica, 3-iloczyn, 4-iloraz\n";
    cin >> ktoreDzialanie;
    cout << "wprowadz liczby\n";
    cin >> liczba1;
    cin >> liczba2;
    switch (ktoreDzialanie)
    {
    case 1:
        cout << "suma to: "<< liczba1 + liczba2 << endl;
        break;
    case 2:
        cout << "roznica to: " << liczba1 - liczba2 << endl;
        break;
    case 3:
        cout << "iloczyn to: " << liczba1 * liczba2 << endl;
        break;
    case 4:
        if (liczba2==0) cout << "nie mozna dzielic przez 0";
        else cout << "iloraz to: " << liczba1 / liczba2;
        break; 
    default:
        cout << "podano zle wartosci";
        break;
    }
    return 0;
    */
    /*
    //***********************zadanie 5

    while(1){
        cout << "petla nieskonczona";
    }
    return 0;
    */
    //***********************zadanie 6

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
        cout << "suma to: "<< liczba1 + liczba2 << endl;
        break;
    case 2:
        cout << "roznica to: " << liczba1 - liczba2 << endl;
        break;
    case 3:
        cout << "iloczyn to: " << liczba1 * liczba2 << endl;
        break;
    case 4:
        if (liczba2==0) cout << "nie mozna dzielic przez 0";
        else cout << "iloraz to: " << liczba1 / liczba2;
        break; 
    default:
        cout << "podano zle wartosci";
        break;
    }
    cout << "\nczy chcesz zakonczyc dzialanie programu? Wprowadz 0 - jesli tak, wprowadz 1 jesli nie\n";
    cin >> czyZakonczycDzialanie;
    }
    */
    //***********************zadanie 7
    /*
    int iterator = 0;
    while(1){
        if (iterator == 200) break;
        if (iterator%2 != 0) cout << iterator << " ";
        iterator++;
    }
    */
    //***********************zadanie 8
    /*
    int n;
    cout << "wprowadz n" << endl;
    cin >> n;
    if (n < 2) {
        cout << "nie jest to liczba pierwsza\n";
        return 0;
    }
    bool pierwsza = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            pierwsza = false;
            break;
        }
    }
    if (pierwsza)
        cout << "liczba pierwsza\n";
    else
        cout << "nie jest to liczba pierwsza\n";
    */
    return 0;
}