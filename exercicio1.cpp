#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float i, m, a;
    
    cout << "Informe a massa: ";
    cin >> m;
    
    cout << "Informe a altura: ";
    cin >> a;
    
    i = m/(a*a);
    
    if(i<17){
        cout << "Muito abaixo do peso";
    }
    else if(i>=17 && i<18.5){
        cout << "Abaixo do peso";
    }
    else if(i>=18.5 && i<25){
        cout << "Peso normal";
    }
    else if(i>=25 && i<30){
        cout << "Acima do peso";
    }
    else if(i>=30 && i<35){
        cout << "Obesidade";
    }
    else if(i>=35 && i<40){
        cout << "Obesidade severa";
    }
    else if(i>=40){
        cout << "Obesidade mórbida";
    }

    return 0;
}
