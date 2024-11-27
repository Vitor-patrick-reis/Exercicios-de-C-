//Escreva um programa que leia um número inteiro e determine se ele é par ou ímpar.

#include<iostream>
using namespace std;

int main(void)
{
int N, R;

    cout<<"Escreva um numero"<<endl;
    cin>>N;
    cin.ignore(80,'\n');

    R = N % 2;

if(R == 0)
    cout<<"Par";


else
    cout<<"Impar";



return 0;
}
