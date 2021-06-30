#include <iostream>
using namespace std;

int main()
{
    int a, min, min_neg, max, max_neg;

    min = 1000;
    max = 0;
    min_neg = -1;
    max_neg = -1000;

    cin >> a;


    while(a!=0)
    {
        if(a<=-1)
        {
            if(a>max_neg)
                max_neg = a;
            if(a<min_neg)
                min_neg = a;
        }
        else if(a>=1)
        {
            if(a>max)
                max = a;
            if(a<min)
                min = a;
        }

        cin >> a;
    }

    cout << "Maximul dintre numerele pozitive este: " << max << endl;
    cout << "Minimul dintre numerele pozitive este: " << min << endl;
    cout << "Maximul dintre numerele negative este: " << max_neg << endl;
    cout << "Minimul dintre numerele negative este: " << min_neg;
}
