#include <iostream>
#include <fstream>

using namespace std;

int m, n, v[1000000], u[1000000];

int main()
{
    int i, j, x;

    ifstream f("bac.in");

    f >> m >> n;

    for(i=0; i<m; i++)
    {
        f >> v[i];
    }

    for(j=0; j<n; j++)
    {
        f >> u[j];
    }

    f.close();

    if(v[0]<u[0])
    {
        cout << v[0] << " ";
        x = v[0];
        i = 1;
        j = 0;
    }
    else
    {
        cout << u[0] << " ";
        x = u[0];
        i = 0;
        j = 1;
    }

    while(i<m && j<n)
    {
        if(v[i]<u[j])
        {
            if(v[i]%2!=x%2)
            {
                cout << v[i] << " ";

                x = v[i];
                i++;
            }
            else
            {
                i++;
            }
        }
        else if(v[i]>u[j])
        {
            if(u[j]%2!=x%2)
            {
                cout << u[j] << " ";

                x = u[j];
                j++;
            }
            else
            {
                j++;
            }
        }
        else
        {
            if(v[i]%2!=x%2)
            {
                cout << v[i] << " ";

                x = v[i];
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
    }

    if(i<m)
    {
        while(i<m)
        {
            if(v[i]%2!=x%2)
            {
                cout << v[i] << " ";

                x = v[i];
                i++;
            }
            else
            {
                i++;
            }
        }
    }
    else if(j<n)
    {
        while(j<n)
        {
            if(u[j]%2!=x%2)
            {
                cout << u[j] << " ";

                x = u[j];
                j++;
            }
            else
            {
                j++;
            }
        }
    }

    return 0;
}
