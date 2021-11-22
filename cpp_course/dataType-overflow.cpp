#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    int intMaximo = INT32_MAX;
    cout << "Maximo inteiro 32b: " << intMaximo << endl;
    cout << "Int + 1: " << intMaximo + 1 << endl;

    /* No video é realizada uma analogia com o relógio
    quando ocorre o "overflow" de dados a variavel volta
    ao valor inicial.
    */

    return 0;
}

