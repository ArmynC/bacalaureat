#include <iostream>
using namespace std;

int main(){
    int i, j, n, aux, a[30];

    cout << "N este: "; cin >> n;

    for(i=1; i<=n; i++){
        cout << "a[" << i << "]=";
        cin >> a[i];
    }

    for(i=1; i<=n-1; i++){
        for(j=i+1; j<=n; j++){
            if(a[i]>a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }

    cout << "Sirul ordonat crescator este: ";
    for(i=1; i<=n; i++)
        cout << a[i] << " ";
}
