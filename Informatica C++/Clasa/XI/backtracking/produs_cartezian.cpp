// Se genereaza toate elementele produsului cartezian A1 * A2 * … * An, unde Ai={1,2,…,ni}.

#include <iostream>
using namespace std;

int s[20], m[20], n;

void init(int k)
{
    s[k]=0; // Nivelul k al stivei se va initializa cu valoarea 0, urmand ca la pasul urmator sa i se atribuie ca valoarea 1, adica primul numar din multime.
}

int succesor(int k)
{
    if(s[k]<m[k]) // Deoarece fiecare multime Ak are un numar diferit de elemente, elementul de pe nivelul k are succesor daca i (acest nivel) < m[k].
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
	int i;

    for(i=1;i<=n;i++)
        cout << s[i] << " "; // Afiseaza elementele solutiei. De obicei, afisarea solutiei consta in afisarea valorilor din stiva.
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

	for(int i=1;i<=n;i++)
	{
		cout << "Cate elemente in multimea " << i << "? "; cin >> m[i]; // Memoreaza numarul de elemente ale fiecarei multimi Ai.
	}

    bt(1); // Apeleaza functia bt pentru completarea pozitiei 1 din vectorul s.
}
