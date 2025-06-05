#ifndef FORMA_H
#define FORMA_H


class Forma
{
protected:
    /* Coordenadas del centro*/
    int x;
    int y;
public:
    Forma();
    Forma(int X = 0, int Y = 0);
    void setCentro(int X = 0, int Y = 0);
    int getX();
    int getY();
    virtual int perimetro() = 0;
    virtual int area() = 0;
};

#endif // FORMA_H
