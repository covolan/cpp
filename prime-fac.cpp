#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int n, sqn, facs[10000], cont = 0;
    cin >> n;
    for (int i = 2; i < (n * n); i++) {
        if ((n % i) == 0) {
            facs[cont] = i;
            n = n / i;
            cont += 1;
        }
    }
    for (int i = 0; i < cont; i++) {
        cout << facs[i] << ", ";
    }
}