#include <iostream>
using namespace std;

void hanoi(int n, char tija_veche, char tija_noua, char tija_ajutor)
{
    if(n==1)
        cout << endl << "Disc (" << n << "): " << tija_veche << " -> " << tija_noua << endl;
    else
    {
		hanoi(n-1, tija_veche, tija_ajutor, tija_noua);
        cout << endl << "Disc (" << n << "): " << tija_veche << " -> " << tija_noua << endl;
        hanoi(n-1, tija_ajutor, tija_noua, tija_veche);
    }
}

int main()
{
    int n;
    char a='A', b='B', c='C';

    cout << "Cate? "; cin >> n;

    hanoi(n, a, b, c);
}
