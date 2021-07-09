#include <iostream>
using namespace std;

int main(){
    int i, j, n, s, a, x[30];

    cout << "N este: "; cin >> n;

    for(i=1; i<=n; i++){
        cout << "x[" << i << "]=";
        cin >> x[i];
    }

    do{
        s=0;
        for(j=2; j<=n; j++){
            for(i=1; i<=n-1; i++){
                if(x[i]>x[i+1]){
                    a=x[i+1];
                    x[i+1]=x[i];
                    x[i]=a;
                    s=1;
                }
            }
        }
    }
    while(s==0);

    cout << "Sirul ordonat crescator este: ";
    for(i=1; i<=n; i++)
        cout << x[i] <<" ";
}
