#include <iostream>
using namespace std;

int x[100], n;

void divizeaza(int s, int d, int &m)
{
    m=(s+d)/2;
}

void interclaseaza(int s, int d, int m)
{
    int i=s,j=m+1,k=1,v[100];

    while(i<=m && j<=d)
    {
        if(x[i]<x[j])
        {
            v[k]=x[i];
            i++;
        }
        else
        {
            v[k]=x[j];
            j++;
        }

    k++;
    }

    if(i<=m)
        while(i<=m)
        {
            v[k]=x[i];
            i++;
            k++;
        }
        else
        while(j<=d)
        {
            v[k]=x[j];
            j++;
            k++;
        }

    for(k=1,i=s;i<=d;k++,i++)
    x[i]=v[k];
}

void MergeSort(int s, int d)
{
    int m;

    if(s<d)
 	{
        divizeaza(s,d,m);
        MergeSort(s,m);
        MergeSort(m+1,d);
        interclaseaza(s,d,m);
    }
}

int main()
{
    int i;

    cout << "Cate? "; cin >> n;

    for(i=1;i<=n;i++)
 	{
    cout << "X[" << i << "]: "; cin>>x[i];
    }

    MergeSort(1,n);

    cout << "Vectorul sortat este: \n";

    for(i=1;i<=n;i++)
    cout << x[i] << " ";
}
