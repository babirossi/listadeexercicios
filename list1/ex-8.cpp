#include<iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

     int idade, cigarros, tc;

     float d;

    cout << "Olá"<<endl;

    cout << "Qual sua idade: ";
    cin >> idade;

    cout << "Quantos cigarros voce fuma por dia:  ";
    cin >> cigarros;

    tc = (cigarros * 365) * idade;

    d = tc / 144;

    cout << "Você perdeu  " << d << " dias de vida ";

}
