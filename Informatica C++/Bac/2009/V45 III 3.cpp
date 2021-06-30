#include <iostream>

using namespace std;

void p(int a, int b)
{
    int x, ok, p, d, prim;

    if(a>b)
    {
        swap (a,b);
    }

    for(x=a; x<=b; x++)
    {
        if(x<8) ;
        else if(x==8)
        {
            cout << x << " ";
        }
        else if(x%2==0) ;
        else
        {
            ok = 0; /// Inca nu am gasit acel p pentru care x = p*p*p (x = p^3).
            p = 3; /// Nu putem avea x = 2*2*2 (x = 2^3) pentru ca x >= 9 deci p il cautam de la 3 in sus.

            while(p*p*p<=x && ok==0)
            {
                /// In primul rand testam daca p este prim.

                d = 3;
                prim = 1; /// Presupunem ca p este prim dar verificam.

                while(prim==1 && d*d<=p)
                {
                    if(p%d==0)
                    {
                        prim = 0;
                    }
                    else
                    {
                        d += 2;
                    }
                }

                if(prim==0)
                {
                    p += 2;
                }
                else
                {
                    if(p*p*p==x)
                    {
                        cout << x << " ";

                        ok = 1;
                    }
                    else
                    {
                        p += 2;
                    }
                }
            }

            if(ok==0) ;
        }
    }
}

int main()
{
    int a, b;

    cin >> a >> b;

    p(a,b);

    return 0;
}
