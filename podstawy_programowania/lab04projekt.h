#pragma once
using namespace std;
float check(float temp, char stopnie) {
    if (stopnie == 'K' && temp < 0) {
        return -999.0;
    }
    if (stopnie == 'C' && temp < -273.15) {
        return -999.0;
    }
    if (stopnie == 'F' && temp < -459.67) {
        return -999.0;
    }
    return temp;
}
float pobierzC() {
    float stopnie;
    cout << "podaj temperature w celsjuszach: ";
    cin >> stopnie;
    return check(stopnie, 'C');
}
float pobierzF() {
    float stopnie;
    cout << "podaj temperature w fahrenheitach: ";
    cin >> stopnie;
    return check(stopnie, 'F');
}
float pobierzK() {
    float stopnie;
    cout << "podaj temperature w kelvinach: ";
    cin >> stopnie;
    return check(stopnie, 'K');
}
float FtoC(float stopnie) { 
   float wynik = (5.0 / 9.0) * (stopnie - 32.0);
   return wynik;
}
float FtoK(float stopnie) { 
   float wynik = (stopnie + 459.67) * 5.0/9.0;
   return wynik;
}
float CtoF(float stopnie) {
   float wynik = stopnie * (9.0 / 5.0) + 32.0;
   return wynik;
}
float CtoK(float stopnie) {
   float wynik = stopnie + 273.15;
   return wynik;
}
float KtoC(float stopnie) {
   float wynik = stopnie - 273.15;
   return wynik;
}
float KtoF(float stopnie) {
   return (stopnie - 273.15) * 9.0 / 5.0 + 32.0;
}
//proceduralna funkcja do menu
void menu() {
    cout << "wybierz konwersje temperatury:\n\n";
    cout << "1 fahrenheit-celsius\n";
    cout << "2 fahrenheit-kelvin\n";
    cout << "3 celsius-fahrenheit\n";
    cout << "4 celsius-kelvin\n";
    cout << "5 kelvin-celsius\n";
    cout << "6 kelvin-fahrenheit\n";
    cout << "7 koniec programu\n";
    cout << "8 wyswietl historie\n";
    cout << "9 usuwanie z historii\n";
    cout << "10 modyfikacja wpisu z historii\n";
    cout << "11 losowe dodawanie wartocsi\n";
    cout << "twoj wybor: ";
}
void menu2() {
    cout << "wybierz jaka konwersje chcesz wyswietlic:\n\n";
    cout << "1 tylko C na inne\n";
    cout << "2 tylko F na inne\n";
    cout << "3 tylko K na inne\n";
    cout << "4 cala historia\n";
    cout << "twoj wybor: ";
}