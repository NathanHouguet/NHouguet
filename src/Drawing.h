#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Point.h"
#include "Figure.h"
#include "Carre.h"
#include "Croix.h"
#include "Menu.h"


class Drawing{

public:
/**** Définition des constructeurs et du destructeur ****/
Drawing(const int width, const int height);
~Drawing();

/**** Définition des fonctions publiques ****/
void save(std::string filename);
void draw();
std::vector<Figure*> tableauDeFigure;
std::vector<int> tableauDesX;
std::vector<int> tableauDesY;

private:
/**** Définition des fonctions privées ****/
void clearImage();
void createTestImage();

protected:
/**** Définition des attributs protégés ****/
const int width;
const int height;
std::vector<char> image;

};

#endif /* DRAWIN_H */
