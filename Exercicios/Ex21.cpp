/*Faça um Programa que pergunte em que turno você estuda.
  Peça para digitar M-Manhã ou T-Tarde ou N- Noturno.
  Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!"
  ou "Valor Inválido!", conforme o caso.
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main (void)
{
char Turno;

cout<<"Qaul turno voce estuda ?"<<endl;
cout<<" <M> para Manha | <T> para tarde | <N> para noite"<<endl;
cin>> Turno;

    if(Turno == 'M' or Turno =='m'){
        cout<<"Bom dia"<<endl;
    }
     else if(Turno == 'T' or Turno =='t'){
        cout<<"boa tarde"<<endl;
     }
      else if(Turno == 'N' or Turno =='n'){
        cout<<"boa noite"<<endl;
      }

       else
        cout<<"modo invalido!"<<endl;

return 0;

}

