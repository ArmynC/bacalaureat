#include <iostream>
using namespace std;

int main()
{
    int a, min, max, n, i;

    cin >> n;
    cin >> a;

    min = max = a;

    for(i=2; i<=n; i++)
    {
        cin >> a;

        if(a>max)
        {
            max = a;
        }

        if(a<min)
        {
            min = a;
        }
    }

    cout << "Valoarea maxima:" << max << endl;
    cout << "Valoarea minima:" << min;
}
