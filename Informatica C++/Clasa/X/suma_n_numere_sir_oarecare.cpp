// Sa se calculeze suma a N numere oarecare.

#include <iostream>
using namespace std;

int main(){
    int n, a, s, i;
    s=0;

    cout << "Cate numere N sunt: "; cin >> n;

    for(i=1;i<=n;i++)
    {
        cout << "Introduceti numerele: "; cin >> a;
        s=s+a;
    }

    cout << "Suma celor " << n << " numere este: " << s;
}
