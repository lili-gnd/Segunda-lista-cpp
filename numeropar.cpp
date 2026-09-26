#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n ,p;
    cout << "Digite um número inteiro: ";
    cin >> n;
    if ( n% 2 == 0){
        cout << "O número é par";
    }
    else {
        cout << "O número é ímpar" << endl;
        p = n+1 ;
        cout << "O próximo número par é " << p;
    }
    return 0;
}
