#include <iostream>

using namespace std;

int main()
{
    int n1, n2, media;
    cout << "Digite a nota do 1 E.E: ";
    cin >> n1;
    cout << "Digite a nota do 2 E.E: ";
    cin >> n2;

    media = (n1 + n2) /2;
    if (media >= 7){
        cout << "Aprovado!";
    }
    if (media >= 3 && media < 7){
        cout << "Prova final.";
    }
    if (media < 3){
        cout << "Reprovado.";
    }
    return 0;
}
