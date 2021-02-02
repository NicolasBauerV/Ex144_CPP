//
//  Point.hpp
//  ex114
//
//  Created by Nicolas BAUER on 02/02/2021.
//

#ifndef Point_hpp
#define Point_hpp

#include <iostream>
#include <stdlib.h>

class Point {
    int x, y;
public:
    Point(int abs=0, int ord=0) {
        x = abs;
        y = ord;
    }
    void affiche() {
        std::cout << "Coordonnées : " << x << " " << y << std::endl;
    }
};

#endif /* Point_hpp */
