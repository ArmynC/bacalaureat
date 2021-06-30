#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, k, i, lgi, lgk, nr;
    char v[21][21];

    cin >> n;
    cin.get();

    cin >> k;
    cin.get();

    for(i=1; i<=n; i++)
    {
        cin.get(v[i],21);
        cin.get();
    }

    nr = 0;
    lgk = strlen(v[k]);

    for(i=1; i<=n; i++)
    {
        if(i!=k)
        {
            lgi = strlen(v[i]);

            if(lgi>=lgk)
            {
                if(strcmp(v[i]+(lgi-lgk),v[k])==0)
                {
                    cout << v[i] << " ";

                    nr++;
                }
            }
        }
    }

    if(nr==0)
    {
        cout << "nu exista";
    }
    return 0;
}
