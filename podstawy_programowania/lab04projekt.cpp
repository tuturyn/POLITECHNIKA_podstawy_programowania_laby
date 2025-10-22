#include <iostream>
#include "lab04projekt.h"
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    double tabWartosci[100] = {};
    char tabTemp[100] = {};
    int dataCounter = 0;
    int wybor = 0, wybor2 = 0;
    float temperatura;
    while(wybor != 7){
        menu();
        cin >> wybor;
        switch (wybor) {
        case 1:
            temperatura = pobierzF();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " fahrenheita, temperatura po: " << FtoC(temperatura) << " celsjusza\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break;
            }
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = FtoC(temperatura);
            tabTemp[dataCounter] = 'F';
            tabTemp[dataCounter+1] = 'C';
            dataCounter += 2;
            break;
        case 2:
            temperatura = pobierzF();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " fahrenheita, temperatura po: " << FtoK(temperatura) << " kelvina\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break;
            }
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = FtoK(temperatura);
            tabTemp[dataCounter] = 'F';
            tabTemp[dataCounter+1] = 'K';
            dataCounter += 2;
            break;
        case 3:
            temperatura = pobierzC();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " celsjusza, temperatura po: " << CtoF(temperatura) << " fahrenheita\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break;
            }
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = CtoF(temperatura);
            tabTemp[dataCounter] = 'C';
            tabTemp[dataCounter+1] = 'F';
            dataCounter += 2;
            break;
        case 4:
            temperatura = pobierzC();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " celsjusza, temperatura po: " << CtoK(temperatura) << " kelvina\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break; 
            }
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = CtoK(temperatura);
            tabTemp[dataCounter] = 'C';
            tabTemp[dataCounter+1] = 'K';
            dataCounter += 2;
            break;
        case 5:
            temperatura = pobierzK();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " kelvina, temperatura po: " << KtoC(temperatura) << " celsjusza\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break; 
            }
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = KtoC(temperatura);
            tabTemp[dataCounter] = 'K';
            tabTemp[dataCounter+1] = 'C';
            dataCounter += 2;
            break;
        case 6:
            temperatura = pobierzK();
            if (temperatura == -999.0) cout << "nie ma takiej temperatury";
            else {
                cout << "temperatura przed: " << temperatura << " kelvina, temperatura po: " << KtoF(temperatura) << " fahrenheita\n";
            }
            if (dataCounter >= 100) {
                cout << "historia pelna - nie mozna zapisac wyniku\n";
                break;
            }   
            tabWartosci[dataCounter] = temperatura;
            tabWartosci[dataCounter+1] = KtoF(temperatura);
            tabTemp[dataCounter] = 'K';
            tabTemp[dataCounter+1] = 'F';
            dataCounter += 2;
            break;
        case 7:
            cout << "koniec programu\n";
            return 0;
        case 8:
            menu2();
            cin >> wybor2;
            switch (wybor2){
            case 1:
                for (int i = 0;i<dataCounter;i+=2){
                    if(tabTemp[i]=='C'){
                        cout<< i/2 + 1 << ". zamiana: "
                            << tabWartosci[i] << tabTemp[i]
                            << " to " << tabWartosci[i+1] << tabTemp[i+1]
                            << "\n";
                    }
                }
                break;
            case 2:
                for (int i = 0;i<dataCounter;i+=2){
                    if(tabTemp[i]=='F'){
                        cout<< i/2 + 1 << ". zamiana: "
                            << tabWartosci[i] << tabTemp[i]
                            << " to " << tabWartosci[i+1] << tabTemp[i+1]
                            << "\n";
                    }
                }
                break;
            case 3:
                for (int i = 0;i<dataCounter;i+=2){
                    if(tabTemp[i]=='K'){
                        cout<< i/2 + 1 << ". zamiana: "
                            << tabWartosci[i] << tabTemp[i]
                            << " to " << tabWartosci[i+1] << tabTemp[i+1]
                            << "\n";
                    }
                }
                break;
            case 4:
                for (int i = 0;i<dataCounter;i+=2){
                    cout<< i/2 + 1 << ". zamiana: "
                        << tabWartosci[i] << tabTemp[i]
                        << " to " << tabWartosci[i+1] << tabTemp[i+1]
                        << "\n";
                }
                break;
            default:
                cout << "zla liczba - komunikat na temat inteligencji wpisujacego\n";
                break;
            }
            break;
        case 9:
        int liniaDoUsuniecia;
            for (int i = 0;i<dataCounter;i+=2){
                    cout<< i/2 + 1 << ". zamiana: "
                        << tabWartosci[i] << tabTemp[i]
                        << " to " << tabWartosci[i+1] << tabTemp[i+1]
                        << "\n";
                }
            cout << "\njaka linie chcesz usunac: ";
            cin >> liniaDoUsuniecia;
            if (liniaDoUsuniecia > dataCounter){
                cout << "nie ma takiej lini" << endl;
                break;
            }
            else{
                int indexStart = liniaDoUsuniecia * 2 - 2;
                    for (int i = indexStart; i < dataCounter - 2; i++) {
                    tabWartosci[i] = tabWartosci[i + 2];
                    tabTemp[i] = tabTemp[i + 2];
                }
                    dataCounter -= 2;
            }
            break;
            case 10: {
                int liniaDoModyfikacji, wyborNowejTemp1, naJakaTemp;
                for (int i = 0; i < dataCounter; i += 2) {
                    cout << i/2 + 1 << ". zamiana: "
                    << tabWartosci[i] << tabTemp[i]
                    << " to " << tabWartosci[i+1] << tabTemp[i+1]
                    << "\n";
                }
                cout << "\nwybierz ktory zapis chcesz modyfikowac: ";
                cin >> liniaDoModyfikacji;
                if (liniaDoModyfikacji < 1 || liniaDoModyfikacji > dataCounter / 2) {
                    cout << "nie ma takiej linii\n";
                    break;
                }
                int indexStart = (liniaDoModyfikacji - 1) * 2;
                cout << "\npodaj nowa temperature: ";
                float nowaWartosc;
                cin >> nowaWartosc;
                cout << "podaj skale tej wartosci: 1 - fahrenheit, 2 - celsius, 3 - kelvin\ntwoj wybor: ";
                cin >> wyborNowejTemp1;
                char skala = '?';
                float checked = -999.0;
                switch (wyborNowejTemp1) {
                case 1: 
                    skala = 'F'; checked = check(nowaWartosc, 'F'); 
                    break;
                case 2: 
                    skala = 'C'; checked = check(nowaWartosc, 'C'); 
                    break;
                case 3: 
                    skala = 'K'; checked = check(nowaWartosc, 'K'); 
                    break;
                default:
                cout << "zla skala\n";
                break;
                }
                if (checked == -999.0) {
                    cout << "niepoprawna temperatura - modyfikacja przerwana\n";
                    break;
                }
                cout << "na jaka temperature chcesz zamienic? 1 - fahrenheit, 2 - celsius, 3 - kelvin\ntwoj wybor: ";
                cin >> naJakaTemp;
                if (naJakaTemp < 1 || naJakaTemp > 3) {
                    cout << "zly wybor skali docelowej\n";
                    break;
                }
                char skalaDocelowa = '?';
                double converted = 0.0;
                if (skala == 'F') {
                    if (naJakaTemp == 1){ 
                        skalaDocelowa = 'F'; 
                        converted = nowaWartosc; 
                    }
                    else if (naJakaTemp == 2){ 
                        skalaDocelowa = 'C'; 
                        converted = FtoC(nowaWartosc); 
                    }
                    else if (naJakaTemp == 3){ 
                        skalaDocelowa = 'K'; 
                        converted = FtoK(nowaWartosc); 
                    }
                } else if (skala == 'C') {
                    if (naJakaTemp == 1){ 
                        skalaDocelowa = 'F'; 
                        converted = CtoF(nowaWartosc); 
                    }
                    else if (naJakaTemp == 2){ 
                        skalaDocelowa = 'C'; 
                        converted = nowaWartosc; 
                    }
                    else if (naJakaTemp == 3){ 
                        skalaDocelowa = 'K'; 
                        converted = CtoK(nowaWartosc); 
                    }
                } else if (skala == 'K') {
                    if (naJakaTemp == 1){ 
                        skalaDocelowa = 'F'; 
                        converted = KtoF(nowaWartosc); 
                    }
                    else if (naJakaTemp == 2){ 
                        skalaDocelowa = 'C'; 
                        converted = KtoC(nowaWartosc); 
                    }
                    else if (naJakaTemp == 3){ 
                        skalaDocelowa = 'K'; 
                        converted = nowaWartosc; 
                    }
                }
                tabWartosci[indexStart] = nowaWartosc;
                tabTemp[indexStart] = skala;
                tabWartosci[indexStart + 1] = converted;
                tabTemp[indexStart + 1] = skalaDocelowa;
                cout << "zapis zaktualizowany: "
                << tabWartosci[indexStart] << tabTemp[indexStart]
                << " -> " << tabWartosci[indexStart + 1] << tabTemp[indexStart + 1]
                << "\n";
                break;
            }
            case 11: {
                int ileLosowych;
                cout << "ile losowych konwersji chcesz wygenerowac: ";
                cin >> ileLosowych;
                if (dataCounter + ileLosowych > 100) {
                    int wybor;
                    cout << "no tyle to sie nie zmiesci, czy wygenerowac tyle losowek ile zostalo miejsca? 1-tak 0-nie";
                    cin >> wybor;
                    if (wybor == 1) ileLosowych = 100 - dataCounter;
                    else break;
                }
                for (int i = 0; i < ileLosowych; ++i) {
                    float losowaWartosc;
                    int losowaSkala = rand() % 3 + 1;
                    int naJakaLosowaSkale = rand() % 3 + 1;
                    switch (losowaSkala){
                        case 1:
                        losowaWartosc = rand() % (541-(-459)+1)+(-459); //f
                        tabWartosci[dataCounter] = losowaWartosc;
                        tabTemp[dataCounter] = 'F';
                        if(naJakaLosowaSkale == 1){
                            tabWartosci[dataCounter+1] = losowaWartosc;
                            tabTemp[dataCounter+1] = 'F';
                        }
                        else if(naJakaLosowaSkale == 2){
                            tabWartosci[dataCounter+1] = FtoC(losowaWartosc);
                            tabTemp[dataCounter+1] = 'C';
                        }
                        else if(naJakaLosowaSkale == 3){
                            tabWartosci[dataCounter+1] = FtoK(losowaWartosc);
                            tabTemp[dataCounter+1] = 'K';
                        }
                        break;
                        case 2:
                        losowaWartosc = rand() % (727-(-273)+1)+(-273); //c
                        tabWartosci[dataCounter] = losowaWartosc;
                        tabTemp[dataCounter] = 'C';
                        if(naJakaLosowaSkale == 1){
                            tabWartosci[dataCounter+1] = CtoF(losowaWartosc);
                            tabTemp[dataCounter+1] = 'F';
                        }
                        else if(naJakaLosowaSkale == 2){
                            tabWartosci[dataCounter+1] = losowaWartosc;
                            tabTemp[dataCounter+1] = 'C';
                        }
                        else if(naJakaLosowaSkale == 3){
                            tabWartosci[dataCounter+1] = CtoK(losowaWartosc);
                            tabTemp[dataCounter+1] = 'K';
                        }
                        break;
                        case 3:
                        losowaWartosc = rand() % 1001; //k
                        tabWartosci[dataCounter] = losowaWartosc;
                        tabTemp[dataCounter] = 'K';
                        if(naJakaLosowaSkale == 1){
                            tabWartosci[dataCounter+1] = KtoF(losowaWartosc);
                            tabTemp[dataCounter+1] = 'F';
                        }
                        else if(naJakaLosowaSkale == 2){
                            tabWartosci[dataCounter+1] = KtoC(losowaWartosc);
                            tabTemp[dataCounter+1] = 'C';
                        }
                        else if(naJakaLosowaSkale == 3){
                            tabWartosci[dataCounter+1] = losowaWartosc;
                            tabTemp[dataCounter+1] = 'K';
                        }
                        break;
                        default:
                            cout <<"\nzla wartosc\n";
                            break;
                    }
                    dataCounter += 2;
                }
                cout << "\ndodano " << ileLosowych << " losowych\n";
            break;    
            }
        break;
        default:
            cout << "zla liczba - komunikat na temat inteligencji wpisujacego\n";
            break;
        }
    }
}