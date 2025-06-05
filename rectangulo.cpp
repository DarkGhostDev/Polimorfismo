#include "rectangulo.h"
#include <iostream>

using namespace std;

rectangulo::rectangulo() : Forma(), base(0), altura(0) {}

rectangulo::rectangulo(int X, int Y, int _base, int _altura) : Forma(X, Y), base(_base), altura(_altura) {}

void Rectangulo::setRectangulo(int _base, int _altura) {
    base = _base;
    altura = _altura;
}

int Rectangulo::getBase() {
    return base;
}

int Rectangulo::getAltura() {
    return altura;
}

int Rectangulo::perimetro() {
    return 2 * (base + altura);
}

int Rectangulo::area() {
    return base * altura;
}

void CaseRectanguloArea(Rectangulo r) {
    cout << "Area del rectangulo: " << r.area() << " unidades cuadradas" << endl;
}

void CaseRectanguloPerim(Rectangulo r) {
    cout << "Perimetro del rectangulo: " << r.perimetro() << " unidades" << endl;
}
