#include <iostream>
using namespace std;
struct wspolrzedne{
    double x;
    double y;
};
struct figura{
    int bok1;
    int bok2;
};
struct trojkaty{
    int bok1;
    int bok2;
    int bok3;  
};
int pole(figura prostokat){
    return prostokat.bok1 * prostokat.bok2;
};
void zamianaBokowTrojkat(trojkaty &trojkat_01, trojkaty &trojkat_02){
    trojkat_02.bok1 = trojkat_01.bok1;
    trojkat_02.bok2 = trojkat_01.bok2;
    trojkat_02.bok3 = trojkat_01.bok3;
}
int main(){
    //**************zadanie1
    /*
    wspolrzedne punkt;
    punkt.x = 4.0;
    punkt.y = 5.2;
    cout << "wspolrzedna pierwsza: " << punkt.x << " wspolrzedna druga: " << punkt.y;
    */
    //**************zadanie2
    /*
    figura prostokat;
    prostokat.bok1 = 2;
    prostokat.bok2 = 3;
    cout << pole(prostokat);
    */
    //**************zadanie3
    /*
    trojkaty trojkat_01;
    trojkaty trojkat_02;
    trojkat_01.bok1 = 3;
    trojkat_01.bok2 = 4;
    trojkat_01.bok3 = 5;
    zamianaBokowTrojkat(trojkat_01,trojkat_02);
    cout << "1 bok drugiego trojkata: " << trojkat_02.bok1 << endl;
    cout << "2 bok drugiego trojkata: " << trojkat_02.bok2 << endl;
    cout << "3 bok drugiego trojkata: " << trojkat_02.bok3 << endl;
    */
    return 0;   
}