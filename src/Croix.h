#ifndef CROIX_H
#define CROIX_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Point.h"

/**** Heritage de la fonction Figure ****/
class Croix:public Figure {

public:
/**** Définition des constructeurs et du destructeur ****/
Croix(Point new_centre, const int new_hauteur, const int new_largeur);
Croix (Point new_centre);
~Croix();

/**** Getter et Setter ****/
void setMilieu(int new_milieu);
int getMilieu(void);     

private:
/**** Définition des attributs ****/
int milieu;

};

#endif /* CROIX_H */

