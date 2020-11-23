#include "Point.h"

Point::Point (){

x=0;
y=0;

}

Point::Point(int nx, int ny) {

x=nx;
y=ny;
  
}

Point::~Point() {}

int Point::getX (void){

return x;

}

int Point::getY (void){

return y;

}

void Point::setX (int nx){

x=nx;

}

void Point::setY (int ny){

y=ny;

}

