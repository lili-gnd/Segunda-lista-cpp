
#include <iostream>

using namespace std;

int main()
{
   float peso, altura, IMC;
   cout << "Digite seu peso: ";
   cin >> peso;
   cout << "Digite sua altura: ";
   cin >> altura;
   IMC = peso/ (altura*altura);

   if (IMC < 18.5){
    cout << "Abaixo do peso.";
   }
   if (IMC >= 18.5 && IMC < 25){
    cout << "Peso normal.";
   }
   if (IMC >= 25){
    cout << "Acima do peso.";
   }

}
