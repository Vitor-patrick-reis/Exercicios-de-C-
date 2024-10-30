//Faça um Programa que leia três números e mostre o maior deles.

#include<iostream>
#include<iomanip>
using namespace std;

int main (void)
{
float A, B, C, X;

    cout <<"Digite o primeiro numero"<<endl;
    cin >>A;
    cin.ignore(80,'\n'); //Limpa buffer do teclado

    cout <<"Digite o segundo numero"<<endl;
    cin >>B;
    cin.ignore(80,'\n');

    cout <<"Digite o terceiro numero"<<endl;
    cin >>C;
    cin.ignore(80,'\n');

        if(A > B && A > C)

            X = A;

        else  if (B > A && B > C)

            X = B;

         else

            X = C;

    cout <<"O maior numero eh" <<setw(2) << X <<endl;

return 0;

}
