#include <iostream>

using namespace std;

int main()
{
    int n, k, mult;

    cin >> n >> k;

    while(k!=0)
    {
        mult =  n*k;

        cout << mult << " ";

        k -= 1;
    }

    return 0;
}
