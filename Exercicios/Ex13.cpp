/*
Tendo como dado de entrada a altura (h) de uma pessoa,
Pergunte o seu sexo, e construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7
*/

#include<iostream>
#include<cmath>
using namespace std;

int main (void)
{
  float H, P;
  char resp {'m'};

  cout <<"Qual a sua altura" << endl;
  cin >> H;

  cout <<"Qual seu sexo digite "f "para femenino ou "m" para masculino" <<endl;
  cin >> resp;

    if(resp == 'm'){
        P = (72.7*H) - 58;

    cout <<"Seu peso ideal eh " << P <<endl;
    }

    else{
        P = (62.1*H) - 44.7;

     cout <<"Seu peso ideal eh " << P <<endl;
        }

return 0;
}

