#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, x, k;

    k = 0;

    ifstream f("bac.txt"); /// Deschidem fisierul bac.txt pentru citirea datelor asociindu-i in program numele f.

    cin >> n;

    while(f>>x)  /// f >> x inseamna citirea lui x din fisierul f.
    {
        if(x%n==0)
        {
            cout << x << " ";

            k++;
        }
    }

    f.close(); /// Se inchide fisierul f.

    if(k==0)
    {
        cout << "NU EXISTA";
    }

    return 0;
}
