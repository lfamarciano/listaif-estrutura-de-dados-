#include <iostream>
using namespace std;

int main()
{
    int ano;
    bool bissexto;
    
    cout<<"Digite um ano: ";
    cin >> ano;
    
    if (ano%4 == 0 and ano%100!=0){
        bissexto= true;
        
    }
    else if (ano%400==0){
        bissexto=true;
    }
    else{
        bissexto = false;
    }
    
    if (bissexto==true){
    cout<<"O ano "<< ano << " é bissexto";
    }
    else{
    cout<<"O ano "<< ano<< " não é bissexto";
    }

    return 0;
}