#include <iostream>
#include <ctime>
using namespace std;
float sredniaArytmetyczna(int *tab, int n){
    float wynik = 0.0;
    for (int i=0; i<n; i++){
        wynik += tab[i];
    }
    return wynik/n;
}
void suma(int *tab1, int *tab2,int rozmiar){
    cout << "suma: ";
    int wynik[rozmiar] = {};
    for(int i = 0; i < rozmiar; i++) {
        wynik[i] = tab1[i] + tab2[i];
        cout << wynik[i] << " ";
    }    
}
void iloczyn(int *tab1, int *tab2, int rozmiar){
    int wynik[rozmiar] = {};
    cout << "iloczyn: ";
    for(int i = 0; i < rozmiar; i++) {
        wynik[i] = tab1[i] * tab2[i];
        cout << wynik[i] << " ";
    }
}
void minMax(int *tab1, int *tab2, int rozmiar){
    int max = tab1[0], min = tab1[0];
    for(int i = 1; i < rozmiar; i++) {
        if(tab1[i] > max) max = tab1[i];
        if(tab1[i] < min) min = tab1[i];
    }
    cout << "roznica " << (max - min) << endl;
}
int main(){
    //************zadanie1
    /*
    int a;
    int *pA = &a;
    cout << "wporwadz a: ";
    cin >> a;
    // wartosc        wartosc pod adresem       //sam adres
    cout << a << "      " << *pA << "      " << pA << endl;
    */
    //************zadanie2
    /*
    int jakas_tablica[10] = {1,2,3,4,5,6,7,8,9,10};
    int *wsk = jakas_tablica;
    wsk += 7;             
    *wsk = 77;            
    for(int i = 0; i < 10; i++) {
        cout << jakas_tablica[i] << " ";
    }
    */
    //************zadanie2.1
    /*
    int tablica[10] = {}; 
    int *wsk = tablica;
    for(int i = 0; i < 10; i++) {
        *wsk = 9;          
        wsk++;
    }
    for(int i = 0; i < 10; i++) {
        cout << tablica[i] << " ";
    }
    */
    //************zadanie3
    /*
    int rozmiar;
    cout << "podaj rozmiar tablicy: ";
    cin >> rozmiar;
    float *tablica = new float[rozmiar];
    for(int i = 0; i < rozmiar; i++) {
        tablica[i] = i;
    }
    float *wsk = &tablica[rozmiar - 1];
    while(true) {
        cout << "wartosc: " << *wsk << endl;
        if(*wsk == 0) {
            break;
        }
        wsk--;
    }
    delete[] tablica;
    */
    //************zadanie4
    /*
    srand(time(0));
    int n;
    cout << "wprowadz rozmiar: ";
    cin >> n;
    int *tablica = new int[n];
    for (int i=0; i<n; i++){
        tablica[i] = rand() % 101;
    }
    cout << "srednia: " << sredniaArytmetyczna(tablica, n);
    delete[] tablica;
    */
    //************zadanie5
    /*
    srand(time(NULL));
    int rozmiar;
    cout << "wprowadz rozmiar: ";
    cin >> rozmiar;
    int *tab1 = new int[rozmiar];
    int *tab2 = new int[rozmiar];
    int *wynik = new int[rozmiar];
    cout << "tab1: ";
    for(int i = 0; i < rozmiar; i++) {
        tab1[i] = rand() % 10 + 1;
        cout << tab1[i] << " ";
    }
    cout << "tab2: ";
    for(int i = 0; i < rozmiar; i++) {
        tab2[i] = rand() % 10 + 1;
        cout << tab2[i] << " ";
    }
    suma(tab1, tab2, rozmiar);
    iloczyn(tab1, tab2, rozmiar);
    minMax(tab1, tab2, rozmiar);
    delete[] tab1;
    delete[] tab2;
    delete[] wynik;
    */
    return 0;
}