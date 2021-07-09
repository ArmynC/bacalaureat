#include <iostream>
using namespace std;

int n, v[30], x;

void divizeaza(int s, int d, int &m)
{
    m=(s+d)/2;
}

void cauta(int s, int d, int &z)
{
    int m;

    if(d>s)
    {
		divizeaza(s,d,m);

		if(v[m]==x)
			z=m;
        else
		if(x>v[m])
			cauta(m+1,d,z);
    }
    else
	cauta(s,m-1,z);
}

main()
{
    int i, z=0;

    cout << "Cate? "; cin >> n;

    cout << "Dati elementele vectorului ordonate crescator: " << endl;
    for(i=1;i<=n;i++)
    {
        cout << "V[" << i << "]="; cin >> v[i];
    }

    cout << "Dati valoarea cautata: "; cin >> x;
	
    cauta(1,n,z);
	
    if(z==0)
        cout << "Valoarea cautata, " << x << " nu se afla in vector.";
    else
        cout << "Elementul " << x <<" se afla in vector pe pozitia: " << z;
 }
