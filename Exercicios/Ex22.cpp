//Apresentar os quadrados dos números inteiros de 15 a 20, dica use um laço de repetição.

#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
int I, Quadrado;

I = 15; // I de indice, sera o nosso contador do laço.

    while(I <= 200){ //Abre o Laço enquanto, use sempre a {} para abrir e fechar o laço.

     Quadrado = I * I;

   cout<<" O quadrado de " << setw(2) << I << " = " << Quadrado << endl;

   I++;
/*coloca o "++" para fazer a soma do I para dar continuidade ao laço
  ou seja depois que faz a conta do laço ele faz I+1 para dar continuidade no laço, se não colocar vai dar loop infinito.
*/

} //Fecha o laço.

  return 0;
}

