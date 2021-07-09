// Se citeste n intreg an calendaristic. Sa se verifice daca este an bisect.

#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Dati valoarea numarului N= "; cin >> n;

    if(n%100!=0 && n%4==0 || n%400==0)
        cout << "Este an bisesct.";
    else
        cout << "Nu este an bisect.";
}
