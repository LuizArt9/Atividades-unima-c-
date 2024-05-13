#include <iostream>
using namespace std;

int main() {
    double num1, num2, divisao;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    if (num2 != 0) {
        divisao = num1 / num2;
        cout << "A divisão é: " << divisao << endl;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
    }
    return 0;
  }
