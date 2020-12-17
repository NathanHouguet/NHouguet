#include<stdio.h>
#include"Rectangle.h"

/***********************************************************************************************/

Rectangle::Rectangle(Point new_centre, const int new_hauteur, const int new_largeur):Figure(new_centre,new_hauteur,new_largeur){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j * getWidth() + i] = 255;
	}
}

}

/***********************************************************************************************/

Rectangle::Rectangle (Point new_centre):Figure(new_centre,0,0){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j * getWidth() + i] = 255;
	}
}

}

/***********************************************************************************************/

Rectangle::~Rectangle(){}
