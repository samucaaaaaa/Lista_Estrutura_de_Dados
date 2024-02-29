#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int ano;
    
    cout << "Informe o ano: ";
    cin >> ano;
    
    if(ano%4==0 && ano%100!=0){
        cout << "O ano é bissexto";
    }
    else if(ano%400==0){
        cout << "O ano é bissexto";
    }
    else{
        cout << "O ano não é bissexto";
    }

    return 0;
}

