#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>

class Figure {

public:
std::vector<char> getFigure();
void setPoint (std::vector<char> &, int);
int getLargeur(void);
int getHauteur(void);
void setLargeur(int );
void setHauteur(int );

protected:
Figure(int , int );
Figure();
~Figure();

private:
int largeur;
int hauteur;
std::vector<char> image;

};

#endif /* FIGURE_H */
