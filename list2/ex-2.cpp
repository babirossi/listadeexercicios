#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2, soma;
   
    cout << "Introduza um n�mero inteiro para obter o somat�rio dos seus digitos: ";
    cin >> num1;
    soma=0;
   
    while (num1>0)
    {
    num2=num1%10;
    num1=(num1-num2)/10;
    soma=soma+num2;
    }
   
    cout << ("O somat�rio �: ",soma);

}
