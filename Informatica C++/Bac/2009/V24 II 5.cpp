#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, m, i, j;
    char s1[101], s2[101], sufix[101];

    cin.get(s1,101);
    cin.get();

    cin.get(s2,101);
    cin.get();

    n = strlen(s1);
    m = strlen(s2);

    if(s1[n-1]!=s2[m-1])
    {
        cout << "NU EXISTA";
    }
    else
    {
        i = n-1;
        j = m-1;

        while(i>=0 && j>=0 && s1[i]==s2[j])
        {
            i--;
            j--;
        }

        i++;
        j++;

        strcpy(sufix,s1+i);

        cout << sufix;

    }

    return 0;
}
