#include <iostream>
#include <cstring>
//#include "Recipe/RecipeItem.h"
#include "Serialize/Serialize.h"
#include "SharedMemory/PointerList.h"
#include "SharedMemory/SharedMemoryGenerator.h"

//#include "SharedMemory/Pointer.h"
int main() {
//    PointerList pList = PointerList();
//    void *po;
//    Pointer p = Pointer("test", po);
//    pList.addPointer(p);
//
//    pList.getPointerByTag("test");
//    pList.getPointerTag(po);
//    std::cout << "Hello, World!" << std::endl;

//    SharedMemory smem = SharedMemory();
//    void *test = smem.generateSharedMemoryBlock(sizeof(int));
////    smem.destroyPointers();
//    int hello = 4;
//    memcpy((char *) test, &hello, sizeof(int));
//    int *test2 = (int *) test;
//    printf("%d \n", *test2);
    std::vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    test.push_back(32828);

    Serialize<int> sr(test);

    return 0;
}