#include <iostream>
using namespace std;

void wypiszLinie(int aktualna, int n){
    if (aktualna > n) return;
    for (int i=0;i < n - aktualna; ++i){
        cout << " ";
    }
    for (int i=0;i < 2*aktualna-1; ++i){
        cout << "*";
    }
    cout << endl;
}
void choinka(int aktualna, int n){
    if (aktualna > n) return;
    wypiszLinie(aktualna, n);   
    choinka(aktualna + 1, n); 
}
int sumaCyfr(int a){
    if (a==0) return 0;
    return (a%10) + sumaCyfr(a/10);
}
string odwroc(string s) {
    if (s.length() <= 1) return s;
    return odwroc(s.substr(1)) + s[0];  
}
bool czyPalindrom(string napis, int lewy, int prawy) {
    if (lewy >= prawy) return true;
    if (napis[lewy] != napis[prawy]) return false;
    return czyPalindrom(napis, lewy + 1, prawy - 1);
}
int najwiekszaZtab(int tab[], int n, int start = 0) {
    if (start == n - 1)
        return tab[start];
    int maxReszta = najwiekszaZtab(tab, n, start + 1);
    return (tab[start] > maxReszta) ? tab[start] : maxReszta;
}
int ciagFibonaciego(int a){
    if (a == 0) return 0;
    if (a == 1) return 1;
    return ciagFibonaciego(a-1) + ciagFibonaciego(a-2);
}
int potegaIteracyjnie(int podstawa, int wykladnik){
    int suma = 1;
    for (int i=0;i<wykladnik;i++){
        suma *= podstawa;
    }
    return suma;
}
int potegaRekurencyjnie(int podstawa, int wykladnik){
    int suma = 1;
    if (wykladnik == 0) return 1;
    return suma *= potegaRekurencyjnie(podstawa, wykladnik-1) * podstawa;
}
int silnia(int a){
    int wynik = 0;
    if (a == 1) return a;
    wynik = a * silnia(a-1);
    return wynik;
}
int sumaNaaturalnychDoN(int n){
    int wynik = 0;
    if (n==1) return 1;
    wynik += (n +sumaNaaturalnychDoN(n-1));
    return wynik;
}
int nwdRekurencyjnie(int a, int b){
    if (b != 0) return nwdRekurencyjnie(b, a%b); 
    else return a;
}
int nwwRekurencyjnie(int a, int b){
    return (a*b)/nwdRekurencyjnie(a,b);
}
int nwdIteracyjnie(int a, int b){
    int c;
    while (b != 0){
        c = a % b;
        a = b;
        b = c;
    }    return a;
}
int nwwIteracyjnie(int a, int b){
    return (a*b)/nwdIteracyjnie(a,b);
}
int main(){
    /***************zadanie1
    int n, aktualna = 1;
    cout << "podaj wysokosc choinki: " << endl;
    cin >> n;
    choinka(aktualna, n);
    */
    //**************zadanie2
    /*
    int a, aDoRekurencji, suma = 0;
    cout << "wporwadz liczbe: ";
    cin >> a;
    aDoRekurencji = a;
    while (a != 0){
        suma += a % 10;
        a /= 10;
    }
    cout << "\nsuma iteracyjnie to: " << suma << endl;
    cout << "\nsuma rekurencyjnie to: " << sumaCyfr(aDoRekurencji) << endl;
    */
    //**************zadanie3
    /*
    string napis;
    cout << "Podaj napis: ";
    cin >> napis;
    cout << "Odwrocony: " << odwroc(napis) << endl;
    */
    //**************zadanie4
    /*
    string napis;
    cout << "wprowadz napis: ";
    cin >> napis;
    (czyPalindrom(napis, 0, napis.length()-1)) ? cout << "palindrom": cout << "nie palindrom";
    */
    //**************zadanie5
    /*
    int rozmiar, max = 0;
    cout << "wprowadz rozmiar: ";
    cin >> rozmiar;
    int tab[rozmiar];
    for (int i=0;i<rozmiar;i++){
        cout << "\nwprowadz " << i+1 << " liczbe do tablicy: ";
        cin >> tab[i];
        if (tab[i] > max) max = tab[i];
    }
    cout << "\nmax iteracyjny to: " <<max;
    cout << "\nmax rekurencyjny to: " << najwiekszaZtab(tab, rozmiar);
    */
    //**************zadanie6
    /*
    int a, wyraz0 = 0, wyraz1 = 1, wynik;
    cout << "podaj wyraz ciagu ktory chcesz obliczyc: ";
    cin >> a;
    for (int i=1;i<a;i++){
        wynik = wyraz0 + wyraz1;
        wyraz0 = wyraz1;
        wyraz1 = wynik;
    }    
    cout << "rekurencyjnie: " << ciagFibonaciego(a) << endl;
    cout << "iteracyjnie: "<< wyraz1 << endl;
    */
    //**************zadanie7
    /*
    int podstawa, wykladnik;
    cout << "podaj podstawe: ";
    cin >> podstawa;
    cout << "podaj wykladnik: ";
    cin >> wykladnik;
    cout << "wynik iteracyjny: " << potegaIteracyjnie(podstawa, wykladnik) << endl;
    cout << "wynik rekurencyjny: " << potegaRekurencyjnie(podstawa, wykladnik) << endl;;
    */
    //**************zadanie8
    /*
    int a, wynik=1;
    cout << "podaj liczbe: ";
    cin >> a;
    for (int i=0;i<a;i++){
        wynik *= a-i;
    }
    cout << "silnia iteracyjnie: " << wynik << endl;
    cout << "silnia rekurencyjnie: "<< silnia(a) << endl;
    */
    //**************zadanie9
    /*
    int liczba, suma = 0;
    cout << "podaj liczbe: ";
    cin >> liczba;
    for (int i=0;i<=liczba;i++){
        suma +=i;
    }
    cout << "suma liczba naturalnych iteracyjnie to: " << suma << endl;
    cout << "suma liczba naturalnych rekurencyjnie to: " << sumaNaaturalnychDoN(liczba) << endl;
    */
    //**************zadanie10 i zadanie11
    /*
    int a, b;
    cout << "wprowadz liczbe 1 do nwd: ";
    cin >> a;
    cout << "wprowadz liczbe 2 do nwd: ";
    cin >> b;
    cout << "nwd iteracyjnie: "<< nwdIteracyjnie(a,b) << endl;
    cout << "nww iteracyjnie: "<< nwwIteracyjnie(a,b) << endl;
    cout << "nwd rekurencyjnie: " << nwdRekurencyjnie(a,b) << endl;
    cout << "nww rekurencyjnie: " << nwwRekurencyjnie(a,b) << endl;
    */
    //**************zadanie12
    /*
    // DLA ZAD 1 - dla n = 5 wynik to 0.002, dla n = 20 wynik to 0.029
    // DLA ZAD 2 - dla a = 123 zarowno iteracyjnie i rekurencyjnie wynik to 0.001 (dla a = 123123123 rowniez tyle samo)
    // DLA ZAD 3 - dla stringa "napis" wynik to 0.002 a dla napisu "bardzodluginapisdotestu" rowniez jest to 0.001
    double czas;
    clock_t start, koniec;

    start = clock(); //rozpoczecie odliczania czasu

    //kod do testu

    koniec = clock();  //zakonczenie odliczania czasu   
    czas = (double)(koniec - start) / CLOCKS_PER_SEC; //zwrocenie czasu dzialania
    cout << endl << endl << "Czas dzialania = " << czas << endl;
    return 0;
    */
}