/*Faça um programa que peça um numero inteiro, entre zero e dez.
  Mostre uma mensagem caso o valor seja inválido, e continue
  pedindo até que o usuário informe um valor válido.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
int N;

 cout<<"Digite um numero entre 0 e 10"<<endl;
 cin >> N;

while(N > 10)
{
    cout << "Numero invalido!"<< endl<< endl;
     cout<<"Digite um numero entre 0 e 10"<<endl;
      cin >> N;
}
 cout<<"Numero Valido"<<endl<<endl;
  cout <<"O numero informado foi "<< setw(2) << N <<endl;

return 0;
}

