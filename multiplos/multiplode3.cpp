#include <iostream>
#include <locale.h>

 using namespace std;

 int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;
    int resto = n % 3;

    if (resto == 0) {
    cout << "O numero ja e multiplo de 3!" << endl;
    }
    else {
    int falta = 3 - resto;
    int proximo_multiplo = n + falta;

    cout << "O proximo multiplo de 3 e: " << proximo_multiplo << endl;
    cout << "(Voce precisou adicionar " << falta << ")." << endl;
    }
    return 0;
     }



