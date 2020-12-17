#include<stdio.h>
#include"Croix.h"

/***************************************************************************************/

Croix::Croix(Point new_centre, const int new_hauteur, const int new_largeur): Figure(new_centre,new_hauteur,new_largeur){

image.resize(getWidth()*getHeight());

setMilieu(new_hauteur);

for (int i=0;i<=getWidth();i++){
setPoint(i,getMilieu());
}

for (int j=0;j<=getHeight();j++){
setPoint(getMilieu(),j);
}
 
}

/***************************************************************************************/

Croix::Croix(Point new_centre):Figure(new_centre,1,1){

image.resize(getWidth()*getHeight());

setMilieu(1);

for (int i=0;i<=getWidth();i++){
setPoint(i,getMilieu());
}

for (int j=0;j<=getHeight();j++){
setPoint(getMilieu(),j);
}

}

/***************************************************************************************/

Croix::~Croix(){}

/***************************************************************************************/

void Croix::setMilieu (int new_longueur){

if(new_longueur%2==0){
milieu=new_longueur+1/2;
}
else{
milieu=new_longueur/2;
}

}

/***************************************************************************************/

int Croix::getMilieu (void){
return milieu;
}

/***************************************************************************************/




