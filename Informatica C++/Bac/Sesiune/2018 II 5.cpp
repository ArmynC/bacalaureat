#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, m, i, j, k, z, l;
    char s[101], c[101], sir[101];

    cin.get(s,101);
    cin.get();

    cin.get(c,101);
    cin.get();

    n = strlen(s);
    m = strlen(c);

    if(m!=n)
    {
        cout << "COD INCORECT";
    }
    else
    {
        sir[0] = NULL;
        sir[0] = s[0];

        i = 1;
        j = 1;
        k = 1;

        while(i<n)
        {
            z = c[j]-'0';

            if(z%2==0)
            {
                /// Adaugam la inceput.

                for(l=k; l>=1; l--)
                {
                    sir[l] = sir[l-1];
                }

                sir[0] = s[i];
                k++;
                sir[k] = NULL;
            }
            else
            {
                /// Adaugam la sfarsit.

                sir[k] = s[i];
                k++;
                sir[k] = NULL;
            }

            i++;
            j++;
        }

        cout << sir;
    }

    return 0;
}
