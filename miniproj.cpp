#include <iostream>
#include <string>

#include "Drawing.h"
<<<<<<< HEAD
#include "Point.h"
#include "Segment.h"
=======
#include "Figure.h"
>>>>>>> 51b3bb32acecda2795404c2f78fb1c6bdae3b07d

const int width = 300;
const int height = 400;

int main(int argc, char **argv) {

  Drawing draw(width, height);

  draw.save(std::string("test_image.bmp"));

  return 0;
}
