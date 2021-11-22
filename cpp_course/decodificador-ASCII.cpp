#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "insira a quantidade de caracteres que a msg possui: ";
    cin >> n;
    int listaCaracteres[n];
    cout << "Insira os valores numericos dos caracteres separados por espaço: ";

    for (int i = 0; i < n; ++i) {
        cin >> listaCaracteres[i];
    }

    cout << "Sua mensagem foi: ";

    for (int i = 0; i < n; ++i) {
        cout << char(listaCaracteres[i]);
    }
    return 0;
}

