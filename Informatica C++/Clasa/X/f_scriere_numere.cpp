#include <fstream>
using namespace std;

ofstream f("f_scriere_numere.out");

int main() {
    int i;

    for (i=1;i<=100;i++)
        f << i << " ";
    f << endl;

    for (i=100;i>=1;i--)
        f << i << " ";
	f.close();
}
