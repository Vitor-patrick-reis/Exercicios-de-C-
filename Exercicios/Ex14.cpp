/* Faça um pogrma que peça a quantidade de horas trabalhadas
   o valor entre as horas de trabalho
   o valor percentual de desconto
   e depois imprima na tela o Salario bruto, salario liquido e os descontos
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main (void)
{
 float ht, vh, pd, td, sb, sl;

 cout << setprecision(2) << fixed;
 cout << right;

 cout << "Entre a quantidade de horas trabalhadas ...: ";
 cin >> ht;
 cin.ignore(80, '\n');

 cout << "Entre o valor da hora trabalho......: ";
 cin >> vh;
 cin.ignore(80, '\n');

 cout << "entre o valor percentual de desconto....:";
 cin >> pd;
 cin.ignore(80, '\n');


sb = ht*vh;
td = (pd/ 100) * sb;
sl = sb - td;

cout << "\n";
cout << "Salario bruto....:" << setw(2) << sb << endl;
cout << "desconto....."  << setw(8) << td << endl;
cout << "Salario liquido..."  << setw(8) << sl << endl;

 cout << "Tecle <enter> para encerrar...";
 cin.get();
 return 0;

}
