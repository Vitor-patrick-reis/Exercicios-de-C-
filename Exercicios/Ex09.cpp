//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
float R, A;
double pi1 = M_PI;

cout <<"Digite o raio" <<endl;
cin >> R; cin.ignore(80, '\n');

A = M_PI * (pow 2 R);

cout << "A area do circulo eh" << A;

return 0;
}


