#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>

class Figure {
protected:
Figure(int , int );
~Figure();

public:
std::vector<char> getFigure();
void setPoint (std::vector<char> &, int);

private:
int largeur;
int hauteur;
std::vector<char> image;

};

#endif /* FIGURE_H */
