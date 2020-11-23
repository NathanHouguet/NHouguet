#include "Carre.h"

Carre::Carre(int nlargeur, int nhauteur, Point norigine){

largeur=nlargeur;
hauteur=nhauteur;

origine.setX(norigine.getX());
origine.setY(norigine.getY());

}

Carre::~Carre() {}

Carre::Carre(Point norigine) {

largeur=0;
hauteur=0;

origine.setX(norigine.getX());
origine.setY(norigine.getY());
 
}

Carre::Carre(){

largeur=0;
hauteur=0;

origine.setX(0);
origine.setY(0);
}
