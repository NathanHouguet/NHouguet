#include<stdio.h>
#include"Segment.h"

/************************************************************************************************/

Segment::Segment(Point new_p, int new_height, int new_width) : Figure(new_p, new_height, new_width){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j * getWidth() + i] = 255;
	}
}

}

/************************************************************************************************/

Segment::Segment(Point new_p):Figure(new_p,1,1){

image.resize(getWidth() * getHeight());

for (int j = 0; j < getHeight(); j++){
	for (int i = 0; i < getWidth(); i++){
	image[j * getWidth() + i] = 255;
	}
}

}

/************************************************************************************************/

Segment::~Segment(){}


