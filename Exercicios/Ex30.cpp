//Crie um programa que leia um número inteiro positivo e calcule o fatorial dele usando for.

#include<iostream>
using namespace std;

int main(void)
{
int N, F, I;

F = 1;

    cout<<"Escreva um numero"<<endl;
    cin>>N;

    for(I = 1; I <= N; I++){

         F *= I;
    }

    cout<<"Fatorial de " << N << " = "<< F <<endl;

return 0;
}
