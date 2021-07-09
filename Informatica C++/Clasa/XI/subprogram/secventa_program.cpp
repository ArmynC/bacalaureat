#include <iostream>
using namespace std;

int a, b, c;

void sb(int &b){
    cout << a << " " << b << " " << c << endl;
}

main(){
    cout << a << " " << b << " " << c << endl;
    a = 10; b = 20; c = 30; sb(a);

    cout << a << " " << b << " " << c << endl;
}
