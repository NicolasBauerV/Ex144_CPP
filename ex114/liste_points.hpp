//
//  liste_points.hpp
//  ex114
//
//  Created by Nicolas BAUER on 02/02/2021.
//

#ifndef liste_points_hpp
#define liste_points_hpp

#include <iostream>
#include "list_chaine.hpp"
#include "Point.hpp"

class Liste_points : public Liste, public Point {
public:
    Liste_points() {};
    void affiche();
    
};

#endif /* liste_points_hpp */
