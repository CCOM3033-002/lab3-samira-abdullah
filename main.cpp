/* 
Samira Abdullah
9 de septiembre de 2025
Laboratorio 3: Números Aleatorios
Colaboradores: Lillian González
 */

#include <iostream>
#include <cstdlib>
using namespace std;
int main (){

    // Desplegar propósito del programa

    cout << "Este programa desplega tres números aleatorios y los organiza en orden descendiente. " << endl;

    //Inicializando el generador de números aleatorios, con el número máximo y minimo deseado de 0-100

    srand(time(0));
    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;

    // Desplegar los números aleatorios en la pantalla
    cout << "Números aleatorios generados: " << numeroAleatorio1 << " " << numeroAleatorio2 << " "<<numeroAleatorio3 << endl;

    //Ordenar los números aleatorios
    cout << "Orden descendiente: ";

    // En el caso de que el primer número aleatorio sea el mayor (desplegando los resultados en orden descendiente)

    if ( numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)
    {
        cout << numeroAleatorio1<< " >= " ;
        if (numeroAleatorio2 >= numeroAleatorio3)
            cout << numeroAleatorio2 << " >= " << numeroAleatorio3 << endl;
        else 
            cout << numeroAleatorio3 << " >= " << numeroAleatorio2 << endl;
    }

    // En el caso de que el segundo número aleatorio sea el mayor (desplegando los resultados en orden descendiente)

    if ( numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio2 >= numeroAleatorio3)
    {
        cout << numeroAleatorio2 << " >= " ;
        if (numeroAleatorio1 >= numeroAleatorio3)
            cout << numeroAleatorio1 << " >= " << numeroAleatorio3 << endl;
        else 
            cout << numeroAleatorio3 << " >= " << numeroAleatorio1 << endl;
    }

    // En el caso de que el tercer número aleatorio sea el mayor (desplegando los resultados en orden descendiente)

    if ( numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio3 >= numeroAleatorio1)
    {
        cout << numeroAleatorio3 << " >= " ;
        if (numeroAleatorio1 >= numeroAleatorio2)
            cout << numeroAleatorio1 << " >= " << numeroAleatorio2 << endl;
        else 
            cout << numeroAleatorio2 << " >= " << numeroAleatorio1 << endl;
    }

    return 0;
}

