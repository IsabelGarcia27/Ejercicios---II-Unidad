#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int resultado = 0, salir = 0;
    int dado1 = 0, dado2 = 0;
    string lanzar;

    while (salir == 0)
    {
        system ("cls");
        cout << endl;
        cout <<"==============" << endl;
        cout <<"JUEGO DE DADOS" << endl;
        cout <<"==============" << endl;
        cout << endl;
        cout <<"Si la suma del lanzamiento es un numero par, entonces usted ganara, de ser lo contario, perdera." << endl;
        cout <<"Presione cualquier tecla la lanzar los dados: ";
        cin >> lanzar;
        
        srand(time(NULL));
        
        system ("cls");
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        
        resultado = (dado1 + dado2);
        
        cout <<"Dado 1 = " << dado1 << endl;
        cout <<"Dado 2 = " << dado2 << endl;
        cout <<"El resultado del lanzamiento es: " << resultado << endl;
        
        if ( resultado % 2 == 0)
        {
            cout <<"FELICIDADES, GANASTE! " << endl;
        }
        else 
        {
            cout <<"PERDISTE:c INTENTELO DE NUEVO" << endl;
        }

        cout << endl;
        cout <<"Si desea volver a jugar presione el numero 0, de lo contrario presione otro numero: ";
        cin >> salir;
        cout << endl;
    }

    return 0;
}
