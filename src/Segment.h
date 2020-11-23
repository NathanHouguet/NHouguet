#ifndef SEGMENT_H
#define SEGMENT_H

#include "Point.h"
#include <iostream>

class Segment : public Point {
public:
Segment (Point , Point );
~Segment ();
void afficher (void);

private:
Point origine;
Point extremite;
};

#endif /* SEGMENT_H */


