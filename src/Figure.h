#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Figure {

private:
/**** Heritage de la fonction Figure ****/
const int width;
const int height;
Point centre;


protected: 
/**** Définition des constructeurs et du destructeur ****/
Figure(Point new_centre,const int new_hauteur, const int new_largeur);
~Figure();
std::vector<char> image;

public:
/**** Getter et Setter ****/
Point getCentre();  
int getHeight();
int getWidth();
void setPoint(int new_hauteur, int new_largeur);
const std::vector<char>& getImage(); 

};

#endif /* FIGURE_H */
