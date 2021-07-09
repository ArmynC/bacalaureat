#include <iostream>
using namespace std;

int main(){
    int n, m, i=1, j=1, k=1, S1[100], S2[100], C[200];

    cout << "Numarul de perechi pentru SECTIA1: ";
    cin >> n;

    cout << "Numarul de perechi pentru SECTIA2: ";
    cin >> m;

    cout << "Dati elementele vectorului din SECTIA1: " << endl;

    for(i=1; i<=n; i++){
        cout << "S1[" << i << "]=";
        cin >> S1[i];
    }

    cout << "Dati elementele vectorului din SECTIA2: " << endl;

    for(j=1; j<=m; j++){
    cout << "S2[" << j << "]=";
    cin >> S2[j];
    }

    while(i<=n && j<=m){
        if(S1[i] == S2[j]){
            C[k]=S1[i];
            i=i+1;
        }
        else {
                if(S1[i] < S2[j]){
                    i=i+1;
                }
            else {
                C[k] = S2[j];
                j=j+1;
            }
        }
        k=k+1;
    }
    while(i<=n){
    C[k]=S1[i];
    i=i+1;
    k=k+1;
    }
    while(j<=m){
    C[k]=S2[j];
    j=j+1;
    k=k+1;
    }

    for(k=1; k<=n+m; k++)
    cout << C[k] << " ";
}
