#include <iostream>
using namespace std;

main(){
    int i, j, n, A[20][20], S=0, P=1;

    cout << "Dati domeniul matricei: ";
    cin >> n;

    cout << "Dati elementele matricei: ";

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout << "A[" << i << "][" << j << "] =";
            cin >> A[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            cout << A[i][j] << " ";
            cout << endl;
    }

    for(i=1;i<=n;i++){
        for(j=1;j<n;j++){
            if(A[i][j]%2==0){
                S=S+A[i][j];
                P=P*A[i][j];
            }
        }
    }

    cout << "Suma elementelor pare: " << S << endl;
    cout << "Produsul elementelor pare: " << P;
}
