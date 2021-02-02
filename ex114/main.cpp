//
//  main.cpp
//  ex114
//
//  Created by Nicolas BAUER on 02/02/2021.
//

#include <iostream>

#include "list_chaine.hpp"
#include "Point.hpp"
#include "liste_points.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    Liste_points list_point;
    Point pt1(5, 3), pt2(7, 2), pt3(8, 4), pt4(5, 9);
    
    //Ajout des points
    list_point.addElement(&pt1);
    
    cout << " Ajout de pt1 : ";
    list_point.affiche();
    
    cout << endl;
    
    list_point.addElement(&pt2);
    
    cout << " Ajout de pt2 : ";
    list_point.affiche();

    cout << endl;
    
    list_point.addElement(&pt3);
    cout << " Ajout de pt3 : ";
    list_point.affiche();
    
    list_point.addElement(&pt4);
    cout << " Ajout de pt4 : ";
    list_point.affiche();
    cout << endl;
    
    return 0;
}
