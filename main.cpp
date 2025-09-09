/* Samira Abdullah
9 de septiembre de 2025
Laboratorio 3 
Colaboradores: Lillian González */

#include <iostream>
#include <cstdlib>
using namespace std;
int main (){

    //Inicializa el Generador de Números Aleatorios con el número máximo y minimo
    srand(time(0));
    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio3 = rand() % (100 - 0 + 1) + 0;
    // Desplegar los numeros aleatorios

    cout << "Números aleatorios generados: " << numeroAleatorio1 << " " << numeroAleatorio2 << " "<<numeroAleatorio3 << endl;

    //Ordenar los números aleatorios
    cout << "Orden descendiente: ";

    // En el caso de que el numero mayor sea el primer aleatorio
    if ( numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio1 >= numeroAleatorio3)
    {
        cout << numeroAleatorio1<< " >= " ;
        if (numeroAleatorio2 >= numeroAleatorio3)
            cout << numeroAleatorio2 << " >= " << numeroAleatorio3 << endl;
        else 
            cout << numeroAleatorio3 << " >= " << numeroAleatorio2 << endl;
    }

    // En el caso de que el numero mayor sea el segundo aleatorio

    if ( numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio2 >= numeroAleatorio3)
    {
        cout << numeroAleatorio2 << " >= " ;
        if (numeroAleatorio1 >= numeroAleatorio3)
            cout << numeroAleatorio1 << " >= " << numeroAleatorio3 << endl;
        else 
            cout << numeroAleatorio3 << " >= " << numeroAleatorio1 << endl;
    }

    // En el caso de que el numero mayor sea el tercero aleatorio

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

