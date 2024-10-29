/*Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/

#include<iostream>
 #include<iomanip>
 using namespace std;

 int main(void)
 {
 char sexo;

 cout<<"Digite <F> para feminino ou <M> para masculino"<<endl;
 cin>> sexo;

    if(sexo == 'F' or sexo == 'f')
        cout<<"O sexo escolhido foi Feminino";

      else if(sexo == 'M' or sexo == 'm')
        cout<<"O sexo escolhido foi masculino";

        else
          cout<<"Sexo invalido"<<endl;


 return 0;

 }
