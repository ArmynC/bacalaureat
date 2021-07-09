// Pret unitar de X lei, la care se aplica TVA in valoare de T%.

#include<iostream>
using namespace std;

int main()
{
    float n,t;
    cout << "N=" ; cin >> n;
    cout << "TVA="; cin >> t;
    cout << n+((n/100)*t);
}
