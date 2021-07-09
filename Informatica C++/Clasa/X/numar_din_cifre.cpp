#include <iostream>
using namespace std;
int main(){
    long n;
    int cifra;
    cout << "Cifra:"; cin >> cifra;
    n=0;
    if(cifra>=0 && cifra<=9)
    do
    {
        n=n*10+cifra;
        cout << "Cifra:";
        cin >> cifra;
    }
    while(cifra>=0 && cifra<=9)
    cout << "Numarul obtinut este " << n << ".";
}
