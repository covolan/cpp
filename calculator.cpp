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
                if (op2 == "s" || op2 == "S") {
                    cout << "Insira a operação [sqrt, log, exp(euler)] \n";
                }
            }
        }
        if (resp == "S" || resp == "s") {
            cout << "Insira um valor: \n";
            cin >> ph1;
            cout << "Insira um outro valor \n";
            cin >> ph2;
            cout << "Insira um operador \n";
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
            cout << tot << "\n Continuar? [S/N] \n";
            cin >> resp;

        } else {
            break;
        }
    }


    return 0;
}
