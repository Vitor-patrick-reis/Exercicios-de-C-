//Faça um Programa que leia três números e mostre o maior deles e o menor.

#include<iostream>
#include<iomanip>
using namespace std;

int main (void)
{
float A, B, C, X1, X2;

    cout <<"Digite o primeiro numero"<<endl;
    cin >>A;
    cin.ignore(80,'\n');

    cout <<"Digite o segundo numero"<<endl;
    cin >>B;
    cin.ignore(80,'\n');

    cout <<"Digite o terceiro numero"<<endl;
    cin >>C;
    cin.ignore(80,'\n');

        //O processamento do maior numero

        if(A > B && A > C)

            X1 = A;

        else  if (B > A && B > C)

            X1 = B;

         else

            X1 = C;

        //O processamento do menor numero

            if(A < B && A < C)

                X2 = A;

            else  if (B < A && B < C)

                X2 = B;

             else

                X2 = C;

    cout <<"O maior numero eh" <<setw(2) << X1 <<endl<<endl;
    cout <<"O menor  numero eh" <<setw(2) << X2 <<endl;

return 0;
}
