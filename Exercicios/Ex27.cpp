//Crie um programa que converta uma temperatura de Celsius para Fahrenheit.

#include<iostream>
using namespace std;

int main(void)
{
double celsius, fahrenheit;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl;

return 0;

}
