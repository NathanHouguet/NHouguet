#ifndef SEGMENT_H
#define SEGEMENT_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Point.h"

class Segment : public Figure {

public:
/**** Définition des constructeurs / desctructeur ****/
Segment(Point new_p, int new_height, int new_width);
Segment(Point new_p);
~Segment();

};

#endif /* SEGEMENT_H */
