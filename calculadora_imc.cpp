#include <iostream>
using namespace std;

int main()
{
    float altura;
    float massa;
    float imc;
    string classe;
    
    
    cout<<"Calculadora de IMC\n";
    cout<<"Digite uma altura(metros): ";
    cin >> altura;
    cout<<"\nDigite uma massa(Kg): ";
    cin>> massa;
    imc=massa/(altura*altura);
    
    if (imc < 17){
        classe="Muito abaixo do peso";
    }
    else if (imc < 18.5){
        classe="Abaixo do peso";
    }
    else if (imc < 25){
        classe="Peso normal";
    }
    else if (imc < 30){
        classe="Acima do peso";
    }
    else if (imc < 35){
        classe="Obesidade";
    }
    else if (imc < 40){
        classe="Obesidade severa";
    }
    else{
        classe="Obesidade mórbida";
    }
    
    cout<<"\nO índice de massa coporal(IMC) para os dados indicados é "<<imc<<".\n";
    cout<<"E a classe em que ele se enquadra é: "<<classe<<".";
    
    return 0;
}