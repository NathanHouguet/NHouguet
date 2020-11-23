#include "Segment.h"

Segment::Segment( Point na,  Point nb) {
  
origine.setX(na.getX());
origine.setY(na.getY());

extremite.setX(nb.getX());
extremite.setY(nb.getY());

}

Segment::~Segment() {}

void Segment::afficher() {

std::cout << "origine(" << origine.getX() << "," << origine.getY() << ")" << ", extremite(" << extremite.getX() << "," << extremite.getY() << ")" << std::endl;

}




