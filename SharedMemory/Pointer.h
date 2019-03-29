//
// Created by ntallaris on 28/3/2019.
//

#ifndef ABSTRACTWITHSHAREDOBJECTS_POINTER_H
#define ABSTRACTWITHSHAREDOBJECTS_POINTER_H
#include <iostream>
#include <string>

class Pointer {
private:
    void *pointer;
    std::string tag;

public:
    Pointer(std::string tag, void *pointer);
    Pointer();
    void *getPointer() const;
    std::string getTag() const;
    bool isPointerTagOf(std::string tag) const;

};


#endif //ABSTRACTWITHSHAREDOBJECTS_POINTER_H
