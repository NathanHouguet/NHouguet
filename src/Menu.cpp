#include<stdio.h>
#include<vector>
#include<iostream>
#include<stdlib.h>
#include<unistd.h>

#include"Menu.h"
#include "Figure.h"
#include "Point.h"
#include "Carre.h"
#include "Rectangle.h"
#include "Croix.h"
#include "Segment.h"

int const width=300;
int const height=400;

void Menu::run(void){

bool flag=true;
int choix_1,choix_2,new_longueur,new_largeur,new_x,new_y,new_cote;

Drawing draw(width,height);

while(flag==true){

choix_1=0;
choix_2=0;
new_longueur=0;
new_largeur=0;
new_x=0;
new_y=0;
new_cote=0;

system("clear");

std::cout<<"********** Menu **********"<< std::endl;
std::cout << "1. 	Creer une forme" << std::endl;
std::cout << "2. 	Dessiner les formes" << std::endl;
std::cout << "3. 	Quitter" << std::endl;
std::cout << "Saisir : \t";
std::cin >> choix_1;
system("clear");

if(choix_1==1){

std::cout << " /***** Voici la liste des figures disponibles *****/" << std::endl;
std::cout << "1.	 Segment" << std::endl;
std::cout << "2. 	 Carre" << std::endl;
std::cout << "3.	 Rectangle" << std::endl;
std::cout << "4.	 Croix" << std::endl;
std::cout << "Saisir : \t";
std::cin >> choix_2;
system("clear");

	if(choix_2==1){

	std::cout << "Indiquez la longueur du segment " << std::endl;
	std::cin >> new_longueur;
	std::cout << "Entrez l'abcisse " << std::endl;
	std::cin >> new_x;
	std::cout << "Entrez l'ordonnée " << std::endl;
	std::cin >> new_y;
				
	if((new_x+new_longueur>width) || (new_y+new_longueur>width) && (new_x+new_longueur>height) && (new_y+new_longueur>height)){

	std::cout << "[ERREUR] Impossible de placer la figure à cet endroit" << std::endl;
	sleep(1);
	}else{
	Point p(new_x,new_y);

	Segment *segment= new Segment(p,new_longueur,1);
	draw.tableauDesX.push_back(1);
	draw.tableauDesY.push_back(new_longueur);
	draw.tableauDeFigure.push_back(segment); 

	}


	}else if(choix_2==2){

	std::cout << "Indiquez la taille du côté " << std::endl;
	std::cin >> new_cote;
	std::cout << "Entrez l'abcisse " << std::endl;
	std::cin >> new_x;
	std::cout << "Entrez l'ordonnée " << std::endl;
	std::cin >> new_y;

		if((new_x+new_cote>width) || (new_y+new_cote>height)){

		std::cout << "[ERREUR] Impossible de placer la figure à cet endroit" << std::endl;
		sleep(1);
		}else{
		Point p(new_x,new_y);
		Carre *carre= new Carre (p,new_cote);
		draw.tableauDesX.push_back(new_cote);
		draw.tableauDesY.push_back(new_cote);
		draw.tableauDeFigure.push_back(carre);
		}

	}else if(choix_2==3){

				std::cout << "Indiquez la taille du la longueur " << std::endl;
				std::cin >> new_longueur;
				std::cout << "Indiquez la taille du la largeur " << std::endl;
				std::cin >> new_largeur;
				std::cout << "Entrez l'abcisse " << std::endl;
				std::cin >> new_x;
				std::cout << "Entrez l'ordonnée " << std::endl;
				std::cin >> new_y;

    			    	if((new_x+new_longueur>width) || (new_y+new_longueur>width) || (new_x+new_longueur>height) || (new_y+new_longueur>height) || (new_x+new_largeur>width) || (new_y+new_largeur>width) || (new_x+new_largeur>height) || (new_y+new_largeur>height) ){

				std::cout<<"[ERREUR] Impossible de placer la figure à cet endroit" << std::endl;
				sleep(1);
				}
  			      	else{
        			Point p(new_x,new_y);
        			Rectangle *rectangle= new Rectangle(p,new_largeur,new_longueur);
        			draw.tableauDesX.push_back(new_largeur);
        			draw.tableauDesY.push_back(new_longueur);
        			draw.tableauDeFigure.push_back(rectangle);
        
        			}


	}else if(choix_2==4){

	std::cout << "Indiquez la valeur de la longueur de la croix" << std::endl;
	std::cin >> new_longueur;
	std::cout << "Indiquez l'abcisse " << std::endl;
	std::cin >> new_x;
        			std::cout << "Indiquez l'ordonnée " << std::endl;
        			std::cin >> new_y;	

				if((new_x+new_longueur>width)||(new_x+new_longueur>height)||(new_longueur %2==0)||(new_y+new_longueur>width)||(new_y+new_longueur>height)){
				std::cout << "[ERREUR] Impossible de placer la figure à cet endroit" << std::endl;
				sleep(1);
				}
      	  			else{
        			Point p(new_x,new_y);
        			Croix *croix= new Croix(p,new_longueur,new_longueur);
        			draw.tableauDesX.push_back(new_longueur);
        			draw.tableauDesY.push_back(new_longueur);
        			draw.tableauDeFigure.push_back(croix);
        
        			}

	}else{
	std::cout << "[ERREUR] La valeur renseignée n'est pas valide" << std::endl;
	sleep(1);
	}

}else if(choix_1==2){

		if(draw.tableauDeFigure.empty()){
		std::cout << "Vous n'avez pas dessiner de figures" << std::endl;
		}else{
		draw.draw();
		draw.save(std::string("test_image.bmp"));
		std::cout << "L'image a été créée sous le nom test_image.bmp" << std::endl;
		}
		sleep(1);


}else if(choix_1==3){

return;

}else{
std::cout << "[ERREUR] La valeur renseignée n'est pas valide" << std::endl;
sleep(1);
}



}//Boucle while

}//Boucle main

Menu::Menu (){}

Menu::~Menu (){}
