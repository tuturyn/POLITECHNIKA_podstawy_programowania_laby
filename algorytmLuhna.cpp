#include <iostream> 
using namespace std;
int doubleCyfra(int num){
    if(num < 9){
        return num;
    }
    return num % 10 + num / 10;
}
int sumaCoDrugiej(long long int d){
    string kartaString = to_string(d);
    int suma = 0;
    int suma2 = 0;
    int lenString;
    lenString = kartaString.length();
    for(int index = lenString-2; index >= 0; index-=2){
        suma += doubleCyfra((kartaString[index]-'0')*2);
    }
    for(int index = lenString-1;index>=0;index-=2){
        suma += (kartaString[index] - '0');
    }
    return suma;
}
int main(){
    long long int numerKarty = 4388576018402626;
    sumaCoDrugiej(numerKarty) % 10 == 0 ? cout << "karta wazna" << endl : cout << "karta nie wazna" << endl;
    return 0;
}
