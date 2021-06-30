#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    int lg, i; /// lg = lungimea primului cuvant.
	char s[256], s2[256], *p, cuv[256]; /// P va merge din cuvant in cuvant si il vom compara cu cuv.

    cin.get(s,256);
    cin.get();

    lg = 0;

    if(s[lg]=='*')
    {
        cout << s;
    }
    else
    {
        while(lg<strlen(s) && isalpha(s[lg]))
        {
            lg++;
        }
        lg--;
        /* In acest moment stim ca primul cuvant din s este format din caracterele s[0],s[1],...,s[lg].
           Aceste caractere le copiem pentru a forma cuvantul cuv. */

        cuv[0] = NULL;

        for(i=0; i<=lg; i++)
        {
            cuv[i] = s[i];
        }

        cuv[lg+1] = NULL;

        s2[0] = '*';
        s2[1] = NULL;

        p = strtok(s,"*");

        while(p)
        {
            if(strcmp(cuv,p)==0)  /* Cuvantul p este identic cu primul cuvant, deci trebuie sters adica
                                     nu il adaugam in sirul s2. Adaugam in s2 doar steluta care urma dupa cuvantul p. */
            {
                strcat(s2,"*");
            }
            else
            {
                strcat(s2,p);

                strcat(s2,"*");
            }

            p = strtok(NULL,"*"); /// Mergem la urmatorul cuvant din text.
        }

        strcpy(s,s2);
        strcpy(s,s+1);

        cout << s;
    }

    return 0;
}
