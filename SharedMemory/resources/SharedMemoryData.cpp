//
// Created by ntallaris on 28/3/2019.
//

#include "SharedMemoryData.h"

SharedMemoryData::SharedMemoryData(void *p, int shmid): p(p), shmid(shmid) {}

void* SharedMemoryData::getPointer() const{
    return this->p;
}

int SharedMemoryData::getSegmentId() const{
    return this->shmid;
}