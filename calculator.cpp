#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main ( ) {
    float tot, ph1, ph2;
    string resp = "S", op = "+", cientifica = "n", op2 = "n";
    
    for (int i = 0; i < 10000; ++i) {
        cout << "Utilizar calc. cientifica? [S/N] \n";
        cin >> cientifica;
        if (cientifica == "S" || cientifica == "s") {
            if (resp == "S" || resp == "s") {
                cout << "Insira um valor: \n";
                cin >> ph1;
                cout << "Realizar alguma operação com o valor? [S/N]";
                cin >> op2;
                }
                if (op2 == "s" || op2 == "S") {
                    cout << "Insira a operação [sqrt, log, exp(euler), sen, cos, tg (rad)] \n";
                    cin >> op2;
                } else {
                    cout << "Insira outro valor: \n";
                    cin >> ph2;
                    cout << "Insira um operador [+ - / *] \n";
                    cin >> op;
                    if (op == "+") {
                        tot = ph1 + ph2; 
                    }
                    else if (op == "-") {
                        tot = ph1 - ph2;
                    }
                    else if (op == "/") {
                        tot = ph1 / ph2;
                    }
                    else if (op == "*") {
                        tot = ph1 * ph2;
                    }
                    cout << "O resultado foi: " << tot << endl;
                    cout << "Realizar mais calculos? [S/N] \n";
                    cin >> op2;
                    if (op2 == "n" || op2 == "N")
                    {
                        break;
                    }
                }
                if (op2 == "sqrt" || op2 == "SQRT")
                {
                    ph1 = sqrt(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora?[S/N] \n";
                    cin >> op2;
                    cout << "Manter o resultado? [S/N]\n ";
                    cin >> op;

                } else if (op2 == "log" || op2 == "LOG")
                {
                    ph1 = log(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora?[S/N] \n";
                    cin >> op2;
                    cout << "Manter o resultado? [S/N]\n ";
                    cin >> op;
                } else if (op2 == "exp" || op2 == "EXP" || op2 == "euler" || op2 == "EULER")
                {
                    ph1 = exp(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora?[S/N] \n";
                    cin >> op2;
                    cout << "Manter o resultado? [S/N]\n ";
                    cin >> op;
                } else if (op2 == "sen" || op2 == "SEN" || op2 == "sin" || op2 == "SIN")
                {
                    ph1 = sin(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora?[S/N] \n";
                    cin >> op2;
                    cout << "Manter o resultado? [S/N]\n ";
                    cin >> op;
                } else if (op2 == "cos" || op2 == "COS")
                {
                    ph1 = cos(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora?[S/N] \n";
                    cin >> op2;
                    cout << "Manter o resultado? [S/N]\n ";
                    cin >> op;
                }
                else if (op2 == "tg" || op2 == "TG" || op2 == "TAN" || op2 == "tan")
                {
                    ph1 = tan(ph1);
                    cout << "O resultado foi: " << ph1 << endl;
                    cout << "Continuar utilizando a calculadora ?[S/N] \n";
                    cin >> op2;
                }
                if (op2 == "n" || op2 == "N")
                    {
                        break;
                    }
                cout << "Manter o resultado? [S/N]\n ";
                cin >> op;
                if (op == "N" || op == "n")
                {
                    ph1 = 0;
                } 
            } else {
                cout << "Insira um valor: \n";
                cin >> ph1;
                cout << "Insira outro valor: \n";
                cin >> ph2;
                cout << "Insira um operador [+ - / *] \n";
                cin >> op;
                if (op == "+") {
                    tot = ph1 + ph2; 
                }
                else if (op == "-") {
                    tot = ph1 - ph2;
                }
                else if (op == "/") {
                    tot = ph1 / ph2;
                }
                else if (op == "*") {
                    tot = ph1 * ph2;
                }
                cout << "O resultado foi: " << tot << endl;
                cout << "Realizar mais calculos? [S/N] \n";
                cin >> op;
                if (op == "n" || op == "N")
                {
                    break;
                }                
            }
    }
}

