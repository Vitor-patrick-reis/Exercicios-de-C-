/*
Tendo como dados de entrada a altura de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/

#include<iostream>
using namespace std;

int main(void)
{
   float A, P;

  cout <<"Digite o valor da sua altura"<<endl;
  cin>> A;

    P = (72.7 * A) - 58;   //Quandor for entrar com a altura entre com ponto "." não com virgula ","

   cout <<"Seu peso ideal eh " << P <<endl;

    return 0;
}
