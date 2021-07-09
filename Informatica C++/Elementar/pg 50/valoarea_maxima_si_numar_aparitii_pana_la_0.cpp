#include <iostream>
using namespace std;

int main()
{
    int a, k,max, min;

    cin >> a;

    max = min = a;

    k = 1;

    while(a!=0)
    {
        if(a>max)
        {
            max = a;
            k = 1;
        }
        else if(a=max)
        {
            k++;
        }
        cin >> a;
    }
    cout << "Valoare maxima: " << max << endl;
    cout << "Numar aparitii: " << k;
}
