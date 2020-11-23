#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>

class Figure {
protected:
Figure(int , int );
Figure();
~Figure();

public:
std::vector<char> getFigure();
void setPoint (std::vector<char> &, int);



protected:
int largeur;
int hauteur;

private:
std::vector<char> image;

};

#endif /* FIGURE_H */
