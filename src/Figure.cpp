#include<stdio.h>
#include"Figure.h"

/*****************************************************************************************************/

Figure::Figure(Point new_centre, const int new_hauteur, const int new_largeur): width(new_largeur), height(new_hauteur),centre(new_centre){

image.resize(new_largeur * new_hauteur);

}

/*****************************************************************************************************/

Figure::~Figure(){}

/*****************************************************************************************************/

void Figure::setPoint(int new_largeur,int new_hauteur){

if(new_largeur==0){
image[(getHeight()-new_hauteur)*getWidth()+(new_largeur)] = 255;
}else{
image[(getHeight()-new_hauteur)*getWidth()+(new_largeur-1)] = 255;
}

}

/*****************************************************************************************************/

const std::vector<char>& Figure::getImage(){
return image;
}

/*****************************************************************************************************/

Point Figure::getCentre(){
return centre;
}

/*****************************************************************************************************/

int Figure::getHeight(){
return height;
}

/*****************************************************************************************************/

int Figure::getWidth(){
return width;
}

/*****************************************************************************************************/


