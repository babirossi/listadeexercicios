#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, temp;

 
     cout << "Digite o primeiro n�mero: ";
     cin >> num1;
    
    cout << "Digeite o segundo n�mero: ";
    cin >> num2;
    
    cout << "Digite o terceiro n�mero: ";
    cin >> num3;
    
    if(num2<num1){
    	temp = num1;
    	num1 = num2;
    	num2 = temp;	
	}     
	
	  if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }
    
     if(num3 < num2){
        temp = num2;
        num2 = num3;
		num3 = temp;
		}
		
		cout << "Os numeros em ordem crescente s�o: ";
    	cout <<num1<< " - " <<num2<< " - " <<num3 <<endl;

 }
