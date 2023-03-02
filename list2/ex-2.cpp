#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
   
    cout << "Introduza um número inteiro para obter o somatório dos seus digitos: ";
    cin >> num1;
    soma=0;
   
    while (num1>0)
    {
    num2=num1%10;
    num1=(num1-num2)/10;
    soma=soma+num2;
    }
   
    cout << ("O somatório é: ",soma);

}
