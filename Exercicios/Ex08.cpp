//Faça um Programa que converta metros para centímetros.

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
float M, C;

cout <<  "Digite a medida em metros" <<'\n';
cin >> M;
cin.ignore(80, '\n');

    C = M * 100;

cout << "O valor convertido eh " << C;
return 0;

}
