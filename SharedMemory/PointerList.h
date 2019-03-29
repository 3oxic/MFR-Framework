//
// Created by ntallaris on 28/3/2019.
//

#ifndef ABSTRACTWITHSHAREDOBJECTS_POINTERLIST_H
#define ABSTRACTWITHSHAREDOBJECTS_POINTERLIST_H

#include "Pointer.h"
#include <iostream>
#include <list>
#include <iterator>
#include <vector>

class PointerList {
private:
    std::vector<Pointer> pointers;

    bool tagExists(std::string tag) const ;
public:
    PointerList();
    void *getPointerByTag(std::string tag);
    std::string getPointerTag(void *p) const;
    void addPointer(Pointer p);
    void addPointer(std::string tag, void *pointer);

};


#endif //ABSTRACTWITHSHAREDOBJECTS_POINTERLIST_H
