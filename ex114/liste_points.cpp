//
//  liste_points.cpp
//  ex114
//
//  Created by Nicolas BAUER on 02/02/2021.
//

#include "liste_points.hpp"
#include "Point.hpp"

void Liste_points::affiche() {
    Point *pt = (Point *) premier();
    while(!liste_void()) {
        pt->affiche(); // Affiche le premier element
        pt = (Point *) prochain(); // se diriger vers l'élément suivant
    }
}
