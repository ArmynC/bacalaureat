#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i, n;
	char s[41], copie[41];

    cin.get(s,41);
    cin.get();

    n = strlen(s);

    strcpy(copie,s);

    for(i=0; i<n; i++)
    {
        strcpy(s,copie);
        strcpy(s+i,s+i+1); /// Se sterge caracterul s[i].

        cout << s << endl;
    }

    return 0;
}
