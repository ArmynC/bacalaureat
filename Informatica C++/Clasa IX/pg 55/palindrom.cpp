#include <iostream>
using namespace std;

int main()
{ 
    // Problema 7, pg 55.
    
    int n, nr, inv, x, i;

    cin >> n;
    for(i=1;i<=n;i++){
    
    cin >> x;
    
    nr = x;
    inv = 0;

    while(x!=0)
    {
        inv = inv*10+ x%10;
        x = x/10;
    }

    if(nr==inv)
    {
        cout << "Numarul este palindrom.";
    }
    else
    {
        cout << "Numarul nu este palindrom.";
    }
    }
    return 0;
}
