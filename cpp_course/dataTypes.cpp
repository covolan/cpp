#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
    // Ponto flutuante:
    float salarioAnual = 50985.99;
    // Inteiro:
    int anoDeNascimento = 1995;
    // Caractere:
    char gender = 'f';
    // Boleano:
    bool eMaiorDe18 = true;
    // Duplo:
    double balanco = 1900000490000;
    // Tamanho das variaveis em bytes:
    cout << "Int: " << sizeof(anoDeNascimento)
     << " bytes, Float: " << sizeof(salarioAnual)
     << " bytes, Char: " << sizeof(gender)
     << " byte, Bool: " << sizeof(eMaiorDe18)
     << " bytes, Double: " << sizeof(balanco) << " bytes.";
    
    /* 
    char: 1b                (-127 to 127 or 0 to 255)
    unsigned char: 1b       (0 to 255)
    signed char: 1b         (-127 to 127)
    int: 4b                 (-2147483648 to 2147483647)
    unsigned int: 4b        (0 to 4294967295)
    signed int: 4b          (-2147483648 to 2147483647)
    short int: 2b           (-32768 to 32767)
    unsigned short int: 1b  (0 to 65535)
    signed short int: 1b    (-32768 to 32767)
    long int: 4b            (-2147483648 to 2147483647)
    signed long int: 4b     (-2147483648 to 2147483647)
    unsigned long int: 4b   (0 to 4294967295)
    float: 4b               (+/- 3.4e +/- 38 (~7digits))
    double: 8b              (+/- 1.7e +/- 308 (~15digits))
    */

    return 0;
}


