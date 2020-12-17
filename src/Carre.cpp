#include<stdio.h>
#include"Carre.h"

/********************************************************************************************/

Carre::Carre(Point new_centre, const int new_cote):Figure(new_centre,new_cote,new_cote){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j*getWidth()+i]=255;
	}
}

}

/********************************************************************************************/

Carre::Carre(Point new_centre):Figure(new_centre,0,0){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j*getWidth()+i]=255;
	}
}

}

/********************************************************************************************/

Carre::~Carre(){}

/********************************************************************************************/

void Carre::setCote (int new_cote){

cote=new_cote;

}

/********************************************************************************************/

int Carre::getCote (void){

return cote;

}
