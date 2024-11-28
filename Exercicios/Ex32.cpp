//Ler e escrever dez elementos numericos inteiros de uma matriz A do tipo vetor.

#include<iostream>
using namespace std;

int main(void)
{
int A[10], I;

        //Entrada dos dados

for(I = 0; I <=9; I++){ //Laço for usa o I++ que é igual a I + 1, para dar continuidade ao laço.
    cout<<"Entre o valor da matriz "<< I+ 1 <<": \n"; // I+1 Usa por conta da linguagem C++ ser cardinal e começar a partir do numero 0.
    cin>> A[I];
}
        //Apresentação dos dados

for(I =0; I <= 9; I++){
    cout<<" o resultado da matriz " <<I+1 << ": " << A[I]<<endl;
}

return 0;
}
