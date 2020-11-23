#ifndef CARRE_H
#define CARRE_H

#include "Figure.h"
#include "Point.h"

class Carre : public Figure, public Point {
public:
Carre(int ,int , Point);
Carre(Point);
Carre();
~Carre();

private:
Point origine;

};

#endif /* CARRE_H */
