#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, i;
    char s[251];

    cin.get(s,251);
    cin.get();

    n = strlen(s);

    for(i=0; i<n-1; i++)
    {
        if(s[i]==s[i+1] && s[i]!='*')
        {
            cout << s[i] << s[i+1] << endl;
        }
    }

    return 0;
}
