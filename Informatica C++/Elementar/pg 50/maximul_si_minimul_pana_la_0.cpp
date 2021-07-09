#include <iostream>
using namespace std;

int main()
{
    int a, max, min;

    cin >> a;
    max = min = a;

    while(a!=0)
    {
        if(a>max)
            max = a;
        if(a<min)
            min = a;

        cin >> a;
    }

    cout << "Valoarea maxima:" << max << endl;
    cout << "Valoarea minima:" << min;
}
