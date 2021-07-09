#include <fstream>
using namespace std;

ofstream f("f_scriere.out");

int main(){
    f << 17 << " "; /* " " este spatiu */
    f << "Primul text cu biblioteca <fstream>" << endl;
    f.close();
}
