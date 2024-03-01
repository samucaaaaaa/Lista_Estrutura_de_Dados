#include <iostream>

using std::cout;
using std::cin;

int main()
{
    float indice, massa, altura;
    
    cout << "Informe a massa: ";
    cin >> massa;
    
    cout << "Informe a altura: ";
    cin >> altura;

    // Cálculo do Índice de Massa Corporal(IMC)
    indice = massa/(altura*altura);

    // Classificação do IMC em diferentes categorias de peso
    if(indice<17){
        cout << "Muito abaixo do peso";
    }
    else if(indice>=17 && indice<18.5){
        cout << "Abaixo do peso";
    }
    else if(indice>=18.5 && indice<25){
        cout << "Peso normal";
    }
    else if(indice>=25 && indice<30){
        cout << "Acima do peso";
    }
    else if(indice>=30 && indice<35){
        cout << "Obesidade";
    }
    else if(indice>=35 && indice<40){
        cout << "Obesidade severa";
    }
    else if(indice>=40){
        cout << "Obesidade mórbida";
    }

    return 0;
}
