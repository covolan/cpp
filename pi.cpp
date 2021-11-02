#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    long double pi = 3, j = 1;
    for (int i = 0; i < 100000000; i += 1) {
        if ((i % 2) == 0) {
            pi += 4 / ((j+1)*(j+2)*(j+3));
        } else {
            pi -= 4 / ((j+1)*(j+2)*(j+3));
        }
        j += 2;
    }
    
    cout << setprecision(33);
    cout << pi;
    //3.1415926535897932384626433.
}
