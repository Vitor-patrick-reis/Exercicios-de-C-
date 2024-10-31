/*Faça um programa que leia um nome de usuário e a sua senha
  e não aceite a senha igual ao nome do usuário,
  mostrando uma mensagem de erro e voltando a pedir as informações.
  depois mostre o Nome e a senha do usuario.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
char Nome[50], Senha[50]; // [] declara a quantidade de caractere.

cout<<"Digite seu nome "<<endl;
 cin >> Nome[50];

 cout <<"Digite sua senha"<<endl;
  cin >> Senha[50];

    while(Nome[50] == Senha[50]){ // "==" Significa igualdade em C++

     cout <<"\n---Erro---"<<endl; // "\n" Foi usado para quebrar linha.
     cout <<"\nA senha nao pode ser igual ao nome"<<endl;
     cout << "\nDigite outra Senha"<<endl;
     cin >> Senha[50];
    }

    cout <<"Seus dados sao:"<<endl;
    cout<<"\nNome:"<<setw(2) << Nome[50]<<endl;
    cout<<"Senha:"<<setw(2) << Senha[50]<<endl;

return 0;
}

