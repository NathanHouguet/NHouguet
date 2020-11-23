#include <iostream>
#include <string>

#include "Drawing.h"
#include "Point.h"
#include "Segment.h"

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  Drawing draw(width, height);

  draw.save(std::string("test_image.bmp"));

//segment
Point A(1,2), B(7,6);
A.setX(3);
A.setY(4);
std::cout << A.getX() << "," << A.getY() << std::endl;

Segment C(A,B);
C.afficher();

  return 0;
}