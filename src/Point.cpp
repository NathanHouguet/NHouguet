#include <iostream>
#include "Point.h"

/******************************************************************************************/

Point::Point(int new_x, int new_y){

setX(new_x);
setY(new_y);

}

/******************************************************************************************/

Point::~Point(){}

/******************************************************************************************/

int Point::getX() const{
return x;
}

/******************************************************************************************/

int Point::getY() const{
return y;
}

/******************************************************************************************/

void Point::setX(int new_x){

if(new_x<0){
x=0;
}else{
x=new_x;
}	

}

/******************************************************************************************/

void Point::setY(int new_y){

if(new_y<0){
y=0;
}else{
y=new_y;
}

}
