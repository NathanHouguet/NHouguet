#ifndef POINT_H
#define POINT_H


class Point {
public:
Point(int , int );
Point (); 
~Point();

int getX(void);
int getY(void);

void setX(int );
void setY(int );

private:
int x;
int y;
};

#endif /* POINT_H */
