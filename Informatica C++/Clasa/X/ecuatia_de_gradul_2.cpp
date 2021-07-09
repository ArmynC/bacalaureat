// Ecuatia de gradul II.
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a, b, c, x1, x2, d;

    cout << "Introdu A:"; cin >> a;
    cout << "Introdu B:"; cin >> b;
    cout << "Introdu C:"; cin >> c;

    if(a==0)
    {
        cout << "Ecuatie de gradul I." << endl;
            if (b==0)
            {
                if (c==0)
                {
                    cout << "Ecuatie cu o infinitate de solutii." << endl;
                }   else {
                        cout << "Ecuatia nu are solutii." << endl;
                }

            }   else {
                    if(x1=-c/b)
                    {
                        cout << "Valoarea lui X1:" << x1 << endl;
                    }
            }
    }   else {
        if(d=b*b-4*a*c)
        {
            if(d>0)
            {
                x1=(-b+sqrt(d)/(2*a));
                x2=(-b-sqrt(d)/(2*a));
                cout << "Ecuatia are doua radacini reale diferite. Valoarea lui X1: " << x1 << ", valoarea lui X2: " << x2 << endl;
            }
        }   else {
            if(x1=-b/(2*a))
        {
            cout << "Ecuatia are doua solutii reale identice. Valoarea lui X1=X2: " << x1 << endl;
        }
        }
    }
}
