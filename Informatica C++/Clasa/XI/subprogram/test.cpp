#include <iostream>
using namespace std;

int a(int n){
    if(n==0)
        return 0;
    else
        return a(n-1)+n;
}

int b(int n){
    if(n<=0)
        return n;
    else
        return b(n-2)+n;
}

int c(int n){
    if(n<=0)
        return 1;
    else
        return 2*c(n-1);
}

int d(int n){
    if(n<=1)
        return 0;
    else
        return d(n-1)+2*n;
}

int e(int n){
    if(n==0)
        return 0;
    else
        if(n%2==0)
            return e(n-1)+n;
        else
            return e(n-1)-n;
}

int f(int aa, int bb){
    if(bb==1)
        return aa;
    else
        return aa+f(aa,bb-1);
}

int g(int n, int i){
    if(n<=i)
        return 1;
    else
        if(n%1==0)
            return 1+g(n/i,i);
        else
            return g(n,i+1);

}

main(){
    cout << a(10);
    cout << endl << b(10);
    cout << endl << c(5);
    cout << endl << d(5);
    cout << endl << e(10);
    cout << endl << f(3,5);
    cout << endl << g(1536,2);
}
