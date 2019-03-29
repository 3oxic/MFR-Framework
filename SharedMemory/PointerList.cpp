//
// Created by ntallaris on 28/3/2019.
//

#include "PointerList.h"
PointerList::PointerList() {}

void PointerList::addPointer(Pointer p) {
    if(tagExists(p.getTag())){
        std::cout << "Tag allready exists. Therefore the pointer is not added" << std::endl;
        return ;

    }
    this->pointers.push_back(p);


}

void PointerList::addPointer(std::string tag, void *pointer) {
    if(tagExists(tag)){
        std::cout << "Tag allready exists. Therefore the pointer is not added" << std::endl;
        return;
    }
    Pointer p = Pointer(tag, pointer);
    this->pointers.push_back(p);
}

void *PointerList::getPointerByTag(const std::string tag){
    using Iter = std::vector<Pointer>::const_iterator;
    for (Iter it = pointers.begin(); it!=pointers.end(); ++it) {
        if(tag.compare(it->getTag()) == 0){
            it->isPointerTagOf(tag);
            return it->getPointer();
        }
    }
    return NULL;
}

std::string PointerList::getPointerTag(void *p) const {
    using Iter = std::vector<Pointer>::const_iterator;
    for (Iter it = pointers.begin(); it!=pointers.end(); ++it) {
        if(p == it->getPointer()){
            return it->getTag();
        }
    }
    return NULL;
}

bool PointerList::tagExists(std::string tag) const{
    using Iter = std::vector<Pointer>::const_iterator;
    for (Iter it = pointers.begin(); it!=pointers.end(); ++it) {
        if(tag.compare(it->getTag())==0 ){
            return true;
        }
    }
    return false;
}