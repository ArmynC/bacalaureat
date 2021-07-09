#include <iostream>

using namespace std;

int main()
{
    int x, cx, cif, s;

    cout << 0 << " " << 1 << " ";

    for(x=10;x<=9999;x++){
        cx = x;
        s = 0;
        while(cx!=0){
            cif = cx%10;
            s = s + cif;
            cx = cx/10;
        }
        if(x==s*s)
            cout << x << " ";
    }
    return 0;
}
