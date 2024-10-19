//  Faça um programa para a leitura de duas notas parciais de um aluno.
//  O programa deve calcular a média alcançada por aluno e apresentar:
//  A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
//  A mensagem "Reprovado", se a média for menor do que sete;
//  A mensagem "Aprovado com nota maxima", se a média for igual a dez.

#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{

float A, B, R;

    cout << "Digite o valor da primeira nota" << endl;;
    cin >> A;
    cin.ignore(80, '\n'); //Limpa o buffer do teclado

    cout << "Digite o valor da segunda nota" << endl;;
    cin >> B;
    cin.ignore(80, '\n');

        R = (A + B) / 2;

    if ( R == 10){
     cout << "Aprovado com nota maxima";
    }

    else if ( R >= 7){
     cout <<"Aprovado ";
    }

    else {
     cout << "Reprovado";
    }

return 0;
}
