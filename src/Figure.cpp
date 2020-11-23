#include "Figure.h"

#include <stb_image_write.h>
#include <stdexcept>
#include <vector>

/****************************************************************************************/

Figure::Figure(int largeur, int hauteur): largeur(largeur), hauteur(hauteur) {

image.resize(largeur * hauteur);

}

/****************************************************************************************/

Figure::Figure(){

hauteur=0;
largeur=0;

}

/****************************************************************************************/

Figure::~Figure() {}

void Figure::setPoint (std::vector<char> & image, int position){

for(int i=0;i<image.size();i++){

image[i]=255;

}

}

/****************************************************************************************/

std::vector<char> Figure::getFigure(){

std::vector<char> monImage;

for(int i=0;i<image.size();i++){

monImage[i]=image[i];

}

return monImage;

}

/****************************************************************************************/

int Figure::getLargeur (void){

return largeur;

}

/****************************************************************************************/

int Figure::getHauteur (void){

return hauteur;

}

/****************************************************************************************/

void Figure::setLargeur (int nlargeur){

largeur=nlargeur;

}

/****************************************************************************************/

void Figure::setHauteur (int nhauteur){

hauteur=nhauteur;

}


