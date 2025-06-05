#include <iostream>
#include "rectangulo.h"

using namespace std;

int main() {
    int opc = 0;
    int l1, l2;
    rectangulo r1;

    do {
        system("cls");
        cout << "FIGURAS GEOMETRICAS\n";
        cout << "Selecciona una opcion:\n"
                "1. Area del rectangulo\n"
                "2. Perimetro del rectangulo\n"
                "3. Salir\n";

        cout << "Opcion: ";
        cin >> opc;

        switch(opc) {
        case 1:
            cout << "Introduce los lados:\n";
            cout << "Lado 1: ";
            cin >> l1;
            cout << "Lado 2: ";
            cin >> l2;
            r1.setRectangulo(l1, l2);
            CaseRectanguloArea(r1);
            system("pause");
            break;

        case 2:
            cout << "Introduce los lados:\n";
            cout << "Lado 1: ";
            cin >> l1;
            cout << "Lado 2: ";
            cin >> l2;
            r1.setRectangulo(l1, l2);
            CaseRectanguloPerim(r1);
            system("pause");
            break;

        case 3:
            cout << "Saliendo del programa...\n";
            break;

        default:
            cout << "Opcion incorrecta. Intentalo de nuevo.\n";
            system("pause");
            break;
        }

    } while (opc != 3);

    return 0;
}
