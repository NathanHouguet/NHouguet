#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Point.h"

class Rectangle:public Figure{

public:
/**** Définition des constructeurs et du destructeur ****/
Rectangle(Point new_centre, const int new_hauteur, const int new_largeur);
Rectangle(Point new_centre);
~Rectangle();

};

#endif /* RECTANGLE_H */
