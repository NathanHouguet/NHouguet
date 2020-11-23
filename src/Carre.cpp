#include "Carre.h"

/****************************************************************************************/

Carre::Carre(int nlargeur, int nhauteur, Point norigine){

setLargeur(nlargeur);
setHauteur(nhauteur);

origine.setX(norigine.getX());
origine.setY(norigine.getY());

}

/****************************************************************************************/

Carre::~Carre() {}

/****************************************************************************************/

Carre::Carre(Point norigine) {

setLargeur(0);
setHauteur(0);

origine.setX(norigine.getX());
origine.setY(norigine.getY());
 
}

/****************************************************************************************/

Carre::Carre(){

setLargeur(0);
setHauteur(0);

origine.setX(0);
origine.setY(0);

}
