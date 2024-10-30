//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
 {

float A, B, C, D, R;

cout << "Digite o valor da primeira nota" << endl;;
cin >> A;
cin.ignore(80, '\n'); //Limpa o buffer do teclado e quebra linha 

cout << "Digite o valor da segunda nota" << endl;;
cin >> B;
cin.ignore(80, '\n'); 

cout << "Digite o valor da terceira nota" << endl;;
cin >> C;
cin.ignore(80, '\n'); 

cout << "Digite o valor da quarta nota" << endl;;
cin >> D;
cin.ignore(80, '\n'); 

    R = (A + B + C + D) / 4;

cout << "A media das notas eh " << R << '\n';

return 0;

}
