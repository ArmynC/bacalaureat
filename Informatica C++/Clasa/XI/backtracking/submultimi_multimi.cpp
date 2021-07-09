/*
Vom considera multimea A={1,2,3,…,n}. Consideram multimea B={0,1}.

Pentru fiecare submultime se defineste functia f:A->B, astfel:
    - daca i din multimea A apartine submultimii, atunci: f(i)=1,
    - altfel: f(i)=0.

Problema se reduce la generarea produsului cartezian Bn.
*/


#include <iostream>
using namespace std;

int s[20], m[20], n;

void init(int k)
{
    s[k]=-1; // Initializarea nivelului k al stivei se face cu valoarea -1, cu 1 mai mic decat 0.
}

int succesor(int k)
{
    if(s[k]<1) // Elementul are succesor numai daca este mai mic decat ultimul element din multime, 1.
    {

        s[k]=s[k]+1; // Daca mai exista un succesor, se trece la urmatorul element din multimea Ak.
        return 1; // De asemenea, functia va returna valoarea 1 (true).
    }
    else return 0; // Daca k >= n, inseamna ca pe aceasta pozitie din permutare nu mai poate fi pus nici un numar. Functia va returna valoarea 0 (false).
}

int valid(int k)
{
		return 1; // Functia va returna valoarea 1 (true).
}

int solutie(int k)
{
    return k==n; // Verifica daca s-au gasit solutii de aranjare in permutare pentru toate cele n numere. Daca s-au gasit, intoarce valoarea 1; altfel, 0.
}

void tipar()
{
    int i, x=0;

    cout << "{";

    for (i=1;i<=n;i++) // Afiseaza numarul nivelului i pentru care, in stiva, se memoreaza valoarea 1.
        if(s[i]==1)
        {
            cout << i << ",";
            x=1;
        }
        if(x)
            cout << "\b"; // Sterge ultimul caracter din sir.

    cout << "}" << endl;
    cout << endl;
}

void bt(int k)
{
    init(k); // Se initializeaza stiva pentru elementul k al solutiei.

    while(succesor(k)) // Cat timp se gaseste succesor pentru elementul k al solutiei.
        if(valid(k)) // Daca succesorul este element al solutiei.
            if(solutie(k)) // Verifica daca s-au obtinut toate elementele solutiei.
                tipar(); // Daca s-au gasit, atunci se afiseaza elementele solutiei.
            else
                bt(k+1);  // Altfel, se apeleaza subprogramul pentru a gasi elementul k+1 al solutiei.
}

int main()
{
    cout << "Cat? "; cin >> n;
    bt(1); // Apeleaza functia bt pentru completarea pozitiei 1 din vectorul s.
}
