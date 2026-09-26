#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    int resto = n % 4;

    if (resto == 0) {
    cout << "O numero já e múltiplo de 4" << endl;
    }
    else {
    int falta = 4 - resto;
    int proximo_multiplo = n + falta;

    cout << "O próximo múltiplo de 4 é: " << proximo_multiplo << endl;
    cout << "(Você precisou adicionar " << falta << ")." << endl;
    }
    return 0;
}
