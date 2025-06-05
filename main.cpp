#include <iostream>
#include "forma.h"

using namespace std;

int main()
{
    int opc = 0;

    do{
        system("cls");
        cout << "FIGURAS GEOMETRICAS" << endl;
        cout << "Introduzca la opcion deseada: \n"
                " 1. Area del circulo. \n"
                " 2. Perimetro del circulo \n"
                " 3. Area del rectangulo \n"
                " 4. Perimetro del rectangulo \n"
                " 5. Area del triangulo no rectangulo \n"
                " 6. Perimetro del triangulo no rectangulo \n"
                " 7. Area del triangulo rectangulo \n"
                " 8. Perimetro del triangulo rectangulo \n"
                " 9. Area del cuadrado \n"
                "10. Perimetro del cuadrado \n"
                "11. Area total del prisma \n"
                "12. Perimetro total del prisma \n"
                "13. Area total del cubo \n"
                "14. Perimetro total del cubo \n"
                "15. Area total de la piramide \n"
                "16. Perimetro total de la piramide \n"
                "17. Area total del cono \n"
                "18. Perimetro total del cono \n"
                "19. Salir del programa \n" ;
        cout << "Opcion: ";  cin >> opc;

        switch(opc){
        case 1:
            /* Completar */
            break;
        case 2:
            /* Completar */
            break;
        case 3:
            /* Completar */
            break;
        case 4:
            /* Completar */
            break;
        case 5:
            /* Completar */
            break;
        case 6:
            /* Completar */
            break;
        case 7:
            /* Completar */
            break;
        case 8:
            /* Completar */
            break;
        case 9:
            /* Completar */
            break;
        case 10:
            /* Completar */
            break;
        case 11:
            /* Completar */
            break;
        case 12:
            /* Completar */
            break;
        case 13:
            /* Completar */
            break;
        case 14:
            /* Completar */
            break;
        case 15:
            /* Completar */
            break;
        case 16:
            /* Completar */
            break;
        case 17:
            /* Completar */
            break;
        case 18:
            /* Completar */
            break;
        case 19:
            cout << "Saliendo del programa ... " << endl;
            break;
        default:
            cout << "Introduzca una opcion correcta ... " << endl;
            system("pause");
            break;
        }

    }while(opc != 19);

    return 0;
}
