#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    cout << "Digite o primeiro número: ";
    cin >> a;
    cout << "Digite o segundo número: ";
    cin >> b;
    cout << "Digite o terceiro número: ";
    cin >> c;
    if (a == b && b == c) {
        cout << "Todos os números são iguais (" << a << ")." << endl;
    }
    else if (a >= b && a >= c) {
        cout << a << " É o maior número" << endl;
    }
    else if (b >= a && b >= c) {
        cout << b << " É o maior número" << endl;
    }
    else {
        cout << c << " É o maior número" << endl;
    }
    return 0;
}
