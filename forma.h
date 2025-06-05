#ifndef FORMA_H
#define FORMA_H

class Forma {
protected:
    int x, y;

public:
    Forma();
    Forma(int X, int Y);

    void setCentro(int X, int Y);
    int getX();
    int getY();

    virtual int perimetro() = 0;
    virtual int area() = 0;
};

#endif
