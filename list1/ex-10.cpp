#include <iostream>

using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3, temp;

 
     cout << "Digite o primeiro número: ";
     cin >> num1;
    
    cout << "Digeite o segundo número: ";
    cin >> num2;
    
    cout << "Digite o terceiro número: ";
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
		
		cout << "Os numeros em ordem crescente são: ";
    	cout <<num1<< " - " <<num2<< " - " <<num3 <<endl;

 }
