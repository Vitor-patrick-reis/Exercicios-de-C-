//Faça um Programa que verifique se a letra digitada é vogal ou consoante.

#include <iostream>
using namespace std;

int main (void)
{
char letra, a, e, i, o, u;

 cout << "Digite uma letra" << endl;
 cin >> letra;

    if ( letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u'){

      cout << "Esta letra eh uma vogal";
 }

    else{
      cout << "Esta letra eh uma consoante";

    }

 return 0;
}
