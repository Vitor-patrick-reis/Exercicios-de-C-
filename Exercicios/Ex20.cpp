/*Faça um programa que pergunte o preço de três produtos e informe qual produto
  você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main (void)
{
float A, B, C, X;
cout << setprecision(2); // setprecision(2): Define a precisão para duas casas decimais.
cout << setiosflags(ios::right); //right: Alinha o texto à direita no campo.
cout << setiosflags(ios::fixed); //fixed: Exibe o número em formato decimal fixo (ex.: 123.46).


    cout <<"Digite o valor do primeiro produto"<<endl;
    cin >>A;
    cin.ignore(80,'\n');

    cout <<"Digite o  valor do segundo produto"<<endl;
    cin >>B;
    cin.ignore(80,'\n');

    cout <<"Digite o valor do terceiro produto"<<endl;
    cin >>C;
    cin.ignore(80,'\n');


            if(A < B && A < C){

                X = A;

            cout <<"O produto 1 e o mais barato, custando " <<setw(2)<<"R$ " << X <<endl;
            }
             else  if (B < A && B < C){

                 X = B;

            cout <<"O produto 2 e o mais barato, custando " <<setw(2)<<"R$ " << X <<endl;
            }
               else{

                  X = C;

          cout <<"O produto 3 e o mais barato, custando " <<setw(2)<<"R$ " << X <<endl;
            }

return 0;

}
