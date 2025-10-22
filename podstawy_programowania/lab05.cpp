#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void findMaxAndMin(int tab[], int n, int &max, int &min) {
    max = tab[0];
    min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) min = tab[i];
        else if (tab[i] > max) max = tab[i];
    }
}
double sredniaArytmetyczna(int tab[], int n, int suma){
    suma = 0;
    for (int i=0;i<n;i++){
        suma += tab[i];
    }
    double srednia = suma / n;
    return srednia;
}
void dodawanieMatrixow(int tab1[3][3], int tab2[3][3]) {
    int tabSumowa[3][3];
    cout << "suma: " << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            tabSumowa[i][j] = tab1[i][j] + tab2[i][j];
            cout << tabSumowa[i][j] << " ";
        }
        cout << endl;
    }
}
void iloczynMatrixow(int tab1[3][3], int tab2[3][3]) {
    int wynik[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            wynik[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                wynik[i][j] += tab1[i][k] * tab2[k][j];
            }
        }
    }
    cout << "iloczyn: \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << wynik[i][j] << " ";
        }
        cout << endl;
    }
}
void babelkoweSortowanie(int *tab, int n){
    int temp;
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if (tab[j] > tab[j+1]){
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}
int main(){
    /*
    //*************zadanie 1
    int liczba;
    int tab[10];
    for (int i = 0; i < 10; i++){
        cout << "wprowadz " << i+1 << " liczbe: ";
        cin >> liczba;
        tab[i] = liczba;
    }
    for (int i = 9; i >= 0; i--){
        cout << " "<< tab[i]; 
    }
    */
    //*************zadanie 2
    /*
    int ileLiczb;
    cout << "ile liczb ciagu chcesz obliczyc: ";
    cin >> ileLiczb;
    int ciag[ileLiczb];
    ciag[0] = 0;
    ciag[1] = 1;
    for (int i = 2; i <=ileLiczb; i++){
        ciag[i] = ciag[i-1] + ciag[i-2];
    }
    for (int i = 0; i <=ileLiczb;i++) cout << ciag[i] << " ";
    */
    //*************zadanie 3
    /*
    int tabLiczb[10];
    int max, min, tabLen, ileMniejszych = 0; 
    double sredniaAry = 0;
    srand(time(NULL));
    tabLen = sizeof(tabLiczb)/sizeof(int);
    for (int i = 0; i < 10; i++){
        tabLiczb[i] = (rand()%100) + 1;
    }
    for (int i = 0; i < 10; i++){
        sredniaAry += tabLiczb[i];
    }
    sredniaAry /= tabLen;
    for (int i = 0; i < 10; i++){
        if (tabLiczb[i] < sredniaAry) ileMniejszych++;
    }
    findMaxAndMin(tabLiczb, tabLen, max, min);
    cout << "min: " << min << endl;
    cout << "max " << max << endl;
    cout << "srednia arytmetyczna: " << sredniaAry << endl;
    cout << "ile liczb jest mniejszych niz srednia arytmetyczna: " << ileMniejszych << endl;
    */
    //*************zadanie 4
    /*
    int wiersze, kolumny, wartosc;
    cout << "podaj ilosc wierszy: ";
    cin >> wiersze;
    cout << "podaj ilosc kolumn: ";
    cin >> kolumny;
    int tab[wiersze][kolumny];
    for (int i = 0; i < wiersze; i++){
        for (int j = 0; j < kolumny; j++){
            cout << "podaj wartosc dla " << i+1 << " wiersza i dla " << j+1 << " kolumny: ";
            cin >> wartosc;
            tab[i][j] = wartosc;
        }
    }
    for (int i = 0; i < wiersze; i++){
        for (int j = 0; j < kolumny; j++){
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }
    */
    //*************zadanie 5
    /*
    int ileUserChceLiczb, ileDopelnieniaZerami, wartosc;
    cout << "ile chcesz wprowadzic liczb do tablicy (max 10): ";
    cin >> ileUserChceLiczb;
    ileDopelnieniaZerami = 10 - ileUserChceLiczb;
    int tab[10];
    for (int i=0; i<ileUserChceLiczb; i++){
        cout << "wprowadz " << i+1 << " liczbe: ";
        cin >> wartosc;
        tab[i] = wartosc;
    }
    for (int i=ileUserChceLiczb; i < 10; i++){
        tab[i] = 0;
    }
    int min, max, sumaWartosciTab = 0;
    for (int i = 0; i<10; i++) sumaWartosciTab += tab[i];
    findMaxAndMin(tab, 10, max, min);
    cout << "srednia arytmetyczna tej tab to: " << sumaWartosciTab / 10.0 << endl << "min: " << min << " max: " << max << endl;
    for (int i = 0; i < 10; i++) cout << tab[i] << " ";
    */
    //*************zadanie 6
    /*    
    srand(time(NULL));
    int tab[10], guess, count = 0;
    for (int i=0;i<10;i++) tab[i] = (rand()%10) +1;
    guess = tab[(rand()%10)];
    for (int i=0;i<10;i++) if(tab[i] == guess) count++;
    cout << "szczesliwa liczba " << guess << " pojawila sie " << count << " razy";
    */
    //*************zadanie 7
    /*
    int tab1[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}};
    int tab2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    dodawanieMatrixow(tab1, tab2);
    */
    //*************zadanie 8
    /*
    int tab1[3][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9}};
    int tab2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    iloczynMatrixow(tab1, tab2);
    */
    //*************zadanie 9
    /*
    int n, suma = 0;
    cout << "podaj jaki wymiar ma miec matrix kwadratowy: ";
    cin >> n;
    int tab[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "wprowadz liczbe dla " << i+1 << " wiersza i dla " << j+1 << " kolumny: ";
            cin >> tab[i][j];
            if (i == j) suma += tab[i][j];  
        }
    }
    cout << "suma: " << suma;
    */
    //*************zadanie 10
    /*
    int tab[10];
    for (int i=0; i<10; i++){
        cout << "wprowadz " << i+1 << " liczbe do tablicy: ";
        cin >> tab[i];
    }
    babelkoweSortowanie(tab, 10);
    for (int i=0; i<10; i++) cout << tab[i] << " ";
    return 0;
    */
}