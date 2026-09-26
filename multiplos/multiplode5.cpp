#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    int resto = n % 5;

    if (resto == 0) {
    cout << "O numero já e múltiplo de 5" << endl;
    }
    else {
    int falta = 5 - resto;
    int proximo_multiplo = n + falta;

    cout << "O próximo múltiplo de 5 é: " << proximo_multiplo << endl;
    cout << "(Você precisou adicionar " << falta << ")." << endl;
    }
    return 0;
}
