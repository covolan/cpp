#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    cout << "Diferença do valores de 'a' e 'A' em ASCII: " << endl;
    cout << "a: " << int('a') << ", A: " << int('A') << endl;

    /* Podemos converter um caractere em valor de ASCII 
    utilizando o operador (int)'a' ou a conversão int('a').
     */
    
    cout << "Convertendo um número em caractere ASCII: " << char(65) << endl;

    /* Podemos utilizar desta forma um valor numerido da
    tabela ASCII para transforma-lo em uma letra correspondente
     a aquele valor.
     */
    return 0;

}

