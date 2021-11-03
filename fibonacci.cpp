#include <iostream>
using namespace std;

int main () {
    int fib[10000], n;
    fib[0] = 0;
    fib[1] = 1;
    cout << "Insira um número para a sequência fibonacci: \n";
    cin >> n;
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; ++i) {
        cout << fib[i] << ", ";
    }
}