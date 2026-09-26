#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1_estudante1, n2_estudante1, media1;
    float n1_estudante2, n2_estudante2, media2;

    cout << "=== Estudante 1 ===" << endl;
    cout << "Digite a nota do 1º exercício: ";
    cin >> n1_estudante1;
    cout << "Digite a nota do 2º exercício: ";
    cin >> n2_estudante1;

    cout << "=== Estudante 2 ===" << endl;
    cout << "Digite a nota do 1º exercício: ";
    cin >> n1_estudante2;
    cout << "Digite a nota do 2º exercício: ";
    cin >> n2_estudante2;

    media1 = (n1_estudante1 + n2_estudante1) /2 ;
    media2 = (n1_estudante2 +  n2_estudante2) /2 ;

    if (media1 > media2){
        cout << "O estudante 1 obteve a maior média: " << media1 << endl;
    }
    else if (media2 > media1) {
       cout << "O estudante 2 obteve a maior média: " << media2 << endl;
    }
    else {
        cout << "Os estudantes tiveram médias iguais: " << media1 << "  e " << media2 << endl;
    }
    return 0;
}
