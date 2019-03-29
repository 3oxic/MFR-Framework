//
// Created by ntallaris on 28/3/2019.
//
#include <stdlib.h>
#include "SharedMemoryGenerator.h"
#include <iostream>

SharedMemory::SharedMemory() {


}

void* SharedMemory::getPointer() {
    return  this->memoryPointer;
}

void* SharedMemory::generateSharedMemoryBlock(size_t size) {
    void *ptr;
    int segment_id;
    char *shared_memory;
    /* Allocate a shared memory segment.  */
    segment_id = shmget (IPC_PRIVATE, size, IPC_CREAT | IPC_EXCL | S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
    /* Attach the shared memory segment.  */
    shared_memory = (char*) shmat (segment_id, 0, 0);
    ptr = (void *) shared_memory;
    SharedMemoryData sData = SharedMemoryData(ptr, segment_id);
    memoryPointers.push_back(sData);
    return ptr;
}

void SharedMemory::destroyPointers() {
    using Iter = std::vector<SharedMemoryData>::const_iterator;
    for (Iter it = memoryPointers.begin(); it!=memoryPointers.end(); ++it) {
        shmdt(it->getPointer());
        // destroy the shared memory
        shmctl(it->getSegmentId(),IPC_RMID,NULL);

    }
}