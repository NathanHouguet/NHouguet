#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "Drawing.h"
#include <stb_image_write.h>
#include <stdexcept>
#include "Figure.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Point.h"
#include "Croix.h"

/****************************************************************************************/

Drawing::Drawing(const int width, const int height):width(width), height(height){
image.resize(width * height);
}

/****************************************************************************************/

Drawing::~Drawing(){}

/****************************************************************************************/

void Drawing::save(std::string filename){


if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
throw std::runtime_error("Drawing ne supporte que l'enregistrement d'images au format bmp");
}

createTestImage();
stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
}

/****************************************************************************************/

/* Set every point of the image to 0 */
void Drawing::clearImage(){
for (std::vector<char>::iterator it = image.begin(); it != image.end();it++) {
*it = 0;
}
}

/****************************************************************************************/

void Drawing::createTestImage(){

draw();

}

/****************************************************************************************/

void Drawing::draw(){

std::vector<char> new_image;
int current_x,current_y,currentPixel,j=0,x=0,y=0,currentPixelToDraw=0;
char val;

for(auto i=tableauDeFigure.begin(); i<tableauDeFigure.end();i++){

new_image=tableauDeFigure[j]->getImage();
current_x=tableauDeFigure[j]->getCentre().getX();
current_y=tableauDeFigure[j]->getCentre().getY();

	if(current_y==0){
	current_y=1;
	}else if(current_x==0){
	current_x=1;
	}

currentPixel=((height-current_y)*width)+(current_x-1);
  
for(int k=0; k<(tableauDesX[j]*tableauDesY[j]); k++){

currentPixelToDraw=currentPixel+(width*y)+x;
image[currentPixelToDraw]=new_image[k];

if(x<(tableauDesY[j]-1)){
   x++;
   }else{
   x=0;
   y++;
   }

}  
j++;
}

}
