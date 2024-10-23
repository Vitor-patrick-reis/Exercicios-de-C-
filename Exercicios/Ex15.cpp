//Faça um Programa que peça dois números e imprima o maior deles.

 #include<iostream>
 #include<iomanip>
 using namespace std;

 int main(void)
 {
 int A, B;

 cout<<"Digite o primeiro numero"<<endl;
 cin>>A;

 cout<<"Digite o segundo numero"<<endl;
 cin>>B;

    if(A > B)

    cout<< "O maior numero eh" <<setw(2) <<A;

      else
       cout<< "O maior numero eh" <<setw(2) <<B;

 return 0;

 }
