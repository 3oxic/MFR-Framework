//
// Created by ntallaris on 28/3/2019.
//
#include "resources/SharedMemoryData.h"
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <vector>


class SharedMemory {
public:
    SharedMemory();
    void *getPointer();
    void *generateSharedMemoryBlock(size_t size);
    void destroyPointers();
private:
    void *memoryPointer;
    std::vector<SharedMemoryData> memoryPointers;
};
