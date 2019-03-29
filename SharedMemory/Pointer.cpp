//
// Created by ntallaris on 28/3/2019.
//

#include "Pointer.h"


Pointer::Pointer(std::string tag, void *pointer):tag(tag), pointer(pointer) {}
Pointer::Pointer() {}

void* Pointer::getPointer() const {
    return  pointer;

}

std::string Pointer::getTag() const {
    return tag;
}

bool Pointer::isPointerTagOf(std::string tag) const{
    if(tag.compare(this->tag) == 0){
        return true;
    }
    return false;
}