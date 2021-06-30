#include <iostream>
#include <cstring> /// Cand lucram cu functii predefinite pentru siruri de caractere.
#include <cctype> /// Cand lucram cu functii predefinite pentru caractere.

using namespace std;

int main()
{
    int i, n;
    char s[21];

    cin.get(s,21);
    cin.get();

    n = strlen(s); /// Functie predefinita care ne da lungimea sirului.

    for(i=0; i<n; i++)
    {
        if(s[i]>='a' && s[i]<='z')  /// Testam daca s[i] este litera mica.
        {
            strcpy(s+i,s+i+1); /// Sterge caracterul s[i].
            n--;
            i--;
        }

        /* s+i reprezinta tot un sir de caractere si anume este sirul s fara primele i caractere.
           strcpy(s1,s2) copiaza sirul s2 in s1 adica este echivalenta cu instructiunea s1=s2. */
    }

    if(n==0)
    {
        cout << "CUVANT VID";
    }
    else
    {
        cout << s;
    }

    return 0;
}
