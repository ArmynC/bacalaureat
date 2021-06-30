#include <iostream>

using namespace std;

int main()
{
    int n, i, x, y, p, cif;

    cin >> n;

    for(i=1;i<=n;i++){
        cin >> x;
        /// Algoritm prin care creeem nr. y ce contine toate cifrele nenule ale lui x
        y = 0;
        p = 1;

        while(x!=0){
            cif = x%10;
            if(cif!=0)
            {y = y+p*cif;
            p = p*10;}
            x = x/10;
        }
        cout << y << " ";
    }
    return 0;
}
