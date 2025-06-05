#include "forma.h"

Forma::Forma()
{

}

Forma::Forma(int X, int Y)
{
    x = X;
    y = Y;
}

void Forma::setCentro(int X, int Y)
{
    x = X;
    y = Y;
}

int Forma::getX()
{
    return x;
}

int Forma::getY()
{
    return y;
}
