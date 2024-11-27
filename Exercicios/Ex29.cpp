//Desenvolva um programa que exiba todos os números de 1 a 100 que são múltiplos de 3.

#include<iostream>
using namespace std;

int main(void)
{
int N, I;

    cout<<"numero de 1 a 100 multiplo de 3" <<endl;

for( I = 1; I <= 100; I++){

    if(I % 3 == 0)
        cout<< I<<endl;
}
return 0;
}

