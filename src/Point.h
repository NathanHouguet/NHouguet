#ifndef POINT_H
#define POINT_H

#include <string>
#include <vector>

class Point{

private:
/**** Attributs de Point ****/
int x;
int y;

public:
/**** Définition des constructeurs et du destructeur ****/
Point(int new_x, int new_y);
~Point();

/**** Définition des getters / setters ****/
int getX() const;
int getY() const;
void setX(int new_x);
void setY(int new_y);

};


#endif /* POINT_H */
