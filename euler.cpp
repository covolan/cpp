#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    double euler = 1, j;
    for (int i = 1; i < 1000; ++i) {
        euler += (1 / tgamma(i + 1));
    }
    cout << setprecision(16);
    cout << euler;
    //2.718281828459045235360287471352
}
