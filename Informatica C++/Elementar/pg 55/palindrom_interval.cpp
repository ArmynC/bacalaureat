#include <iostream>

using namespace std;

int main()
{
    int a, b, x, cx, ogl, cif;

    cin >> a >> b;

    if(a>b){
        swap(a,b);
    }

    for(x=a;x<=b;x++){
        cx = x;
        ogl = 0;
        while(cx!=0){
            cif = cx%10;
            ogl = ogl * 10 + cif;
            cx = cx/10;
        }
        if(ogl==x){
            cout << x << " ";
        }
    }
    return 0;
}
