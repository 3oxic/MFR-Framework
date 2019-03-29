//
// Created by ntallaris on 28/3/2019.
//

#ifndef ABSTRACTWITHSHAREDOBJECTS_SHAREDMEMORYDATA_H
#define ABSTRACTWITHSHAREDOBJECTS_SHAREDMEMORYDATA_H


class SharedMemoryData {
private:
    void *p;
    int shmid;
public:
    SharedMemoryData(void *p, int shmid);

    void *getPointer() const;
    int getSegmentId() const;
};


#endif //ABSTRACTWITHSHAREDOBJECTS_SHAREDMEMORYDATA_H
