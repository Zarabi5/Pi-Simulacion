#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numPuntos;
    int numPuntosCirculo = 0;
    double x, y, distancia, estimacionPI;

    cout << "Ingrese el numero de puntos a generar: ";
    cin >> numPuntos;

    srand(time(0));

    for (int i = 0; i < numPuntos; i++) {
        x = (double) rand() / RAND_MAX;
        y = (double) rand() / RAND_MAX;
        distancia = x * x + y * y;

        if (distancia <= 1) {
            numPuntosCirculo++;
        }
    }

    estimacionPI = 4.0 * numPuntosCirculo / numPuntos;

    cout << "El valor estimado de PI es: " << estimacionPI << endl;

    return 0;
}

