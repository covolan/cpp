#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string frase;
    cout << "Insira uma frase para transforma-la em ASCII separada por espaços: ";
    cin >> frase;
    for (int i = 0; i < frase.length(); ++i) {
        cout << int(frase[i]) << " ";
    }
    return 0;
}
