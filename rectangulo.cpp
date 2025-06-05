#include "rectangulo.h"
#include <iostream>

using namespace std;

rectangulo::rectangulo() : Forma(), base(0), altura(0) {}

rectangulo::rectangulo(int X, int Y, int _base, int _altura) : Forma(X, Y), base(_base), altura(_altura) {}

void rectangulo::setRectangulo(int _base, int _altura) {
    base = _base;
    altura = _altura;
}

int rectangulo::getBase() {
    return base;
}

int rectangulo::getAltura() {
    return altura;
}

int rectangulo::perimetro() {
    return 2 * (base + altura);
}

int rectangulo::area() {
    return base * altura;
}

void CaseRectanguloArea(rectangulo r) {
    cout << "Area del rectangulo: " << r.area() << " unidades cuadradas" << endl;
}

void CaseRectanguloPerim(rectangulo r) {
    cout << "Perimetro del rectangulo: " << r.perimetro() << " unidades" << endl;
}
