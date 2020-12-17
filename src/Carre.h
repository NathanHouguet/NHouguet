#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <vector>
#include "Figure.h"
#include "Point.h"

/**** Heritage de la fonction Figure ****/
class Carre:public Figure {

public:
/**** Définition des constructeurs et du destructeur ****/
Carre(Point centre,const int cote);
Carre(Point centre);
~Carre();

/**** Getter et Setter ****/
void setCote (int new_cote);
int getCote (void);
  
private:
/**** Définition des attributs ****/
int cote;

};

#endif /* CARRE_H */
