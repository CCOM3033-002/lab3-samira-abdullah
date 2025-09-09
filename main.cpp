/* Samira Abdullah
9 de septiembre de 2025
Laboratorio 3 
Colaboradores: */

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

    cout << "Números aleatorios generados: " << numeroAleatorio1 << numeroAleatorio2 << numeroAleatorio3 << endl;

    //Ordenar los números aleatorios
    


    return 0;
}

