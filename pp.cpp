#include <iostream>
using namespace std;
int main(){
    string name = "bro";
    cout << "****wskazniki****" << endl;
    int age = 12;
    int *pAge = &age;
    // miejsce w pamieci adresu danej zmiennej pAge ma byc czyms co jest pod adresem age
    string pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};
    string *pFreepizzas = pizzas;
    string *pName = &name;
    cout << *pName << endl;
    cout << *pAge << endl;
    cout << pFreepizzas << endl;
    return 0;
} 