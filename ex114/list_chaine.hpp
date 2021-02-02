//
//  list_chaine.hpp
//  ex114
//
//  Created by Nicolas BAUER on 02/02/2021.
//

#ifndef list_chaine_hpp
#define list_chaine_hpp

#include <stdlib.h>
#include <iostream>

struct element {
    element *p_next;
    void *p_contenu;
};

class Liste {
//    *debut pointera sur le premier element
    element *p_debut;
    
//    élement courant
    element *p_current;
    
public:
    Liste() {
        p_debut = NULL;
        p_current = NULL;
    }
    ~Liste() {
        element *next;
        p_current = p_debut;
        
        // Si l'élément courant n'est pas vide alors on passe l'élément suivant et on supprime/release la mémoire de l'élément courrant
        while (p_current != NULL) {
            next = p_current->p_next;
            delete p_current;
            p_current = next;
        }
    }
    
    // Ajout d'un élément
    void addElement(void *new_element) {
        element *p_elem = new element; // Sur la liste chaine
        p_elem->p_next = p_debut; // l'ancien elem va au suivant
        p_elem->p_contenu = new_element; // le nouvel element s'ajoute
        p_debut = p_elem; //on place le nouvel element dans la liste au tout début
    }
    
    void *premier() {
        p_current = p_debut;
        if (p_current != NULL) {
            return p_current->p_next;
        }
        return NULL;
    }
    
    void *prochain() {
        if (p_current != NULL) {
            p_current = p_current->p_next;
            return p_current->p_contenu;
        }
        return NULL;
    }
    
    int liste_void() {
        return (p_current == NULL);
    }
    
};

#endif /* list_chaine_hpp */
