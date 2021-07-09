#include <fstream>
using namespace std;

ofstream f("f_scriere_litere.out");

main() {
    char L;

    for (L='A';L<='Z';L++)
        f << L <<" ";
    f << endl;

    for (L='Z';L>='A';L--)
        f << L <<" ";
    f.close();
}
