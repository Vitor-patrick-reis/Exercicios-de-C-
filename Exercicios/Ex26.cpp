/*Faça um programa que leia a idade de uma pessoa e exiba uma mensagem
informando se ela é maior de idade (18 anos ou mais) ou menor.
*/

#include<iostream>
using namespace std;

int main(void)
{
int N;

    cout <<"Sua idade"<<endl;
    cin>> N;
if(N >= 18){
    cout <<"Maior de idade";
}

else{
    cout<<"Menor de idade";
}


return 0;

}
