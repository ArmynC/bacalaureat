#include <iostream>
#include <cstring> /// Pentru functii care au ca parametru unul sau mai multe siruri de caractere.
#include <cctype> /// Pentru functii care au ca parametrii caractere.

using namespace std;

int main()
{
    int n, i;
    char s[256];

    cin.get(s,256); /// Citirea sirului de caractere.
    cin.get();

    n = strlen(s); /// Lungimea sirului.

    for(i=0; i<n; i++)
    {
        // Testam daca s[i] este litera si respectiv s[i-1] este spatiu.
        if(i==0 || (i!=0 && (isalpha(s[i]) && isspace(s[i-1]))))
        {
            s[i] = toupper(s[i]); /// Returneaza aceeasi litera dar mare.
        }
    }

    cout << s;

    return 0;
}
