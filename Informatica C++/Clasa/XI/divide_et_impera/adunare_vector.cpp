// Suma numerelor pare din vector.

#include<iostream>
using namespace std;

int v[20], n;

int divide(int s, int d)
{
    int mij, d1 , d2;

    if(s!=d)
    {
        mij=(s+d)/2;
        d1=divide(s,mij);
        d2=divide(mij+1,d);

        return d1+d2;
    }
    else
    return v[s];
}

int main()
{
    int i;

    cout << "Cate? "; cin >> n;

    for(i=1;i<=n;i++)
    {
        cout << "V[" << i << "]: "; cin >> v[i];
    }

    cout << "Suma celor " << n << " elemente ale vectorului este: "<< divide(1,n);
}
