//
// Created by ntallaris on 28/3/2019.
//

#ifndef MAPFUNCTIONS_SERIALIZE_H
#define MAPFUNCTIONS_SERIALIZE_H

#include <iostream>
#include <cstring>
#include <vector>
#include <string>

template <class T>
class Serialize {
public:

    void
    print_hex(unsigned char *data, size_t len) {
        size_t i;

        if (!data)
            printf("NULL data\n");
        else {
            for (i = 0; i < len; i++) {
                if (!(i % 16) && (i != 0))
                    printf("\n");
                printf("%02X ", data[i]);
            }
            printf("\n");
        }
    }


    Serialize(std::vector<T> data) {
        T* dataArr = &data[0];
        char * buff;
        buff = (char *) malloc( data.size() * sizeof(T));
        std::copy((char *) &data[0], (char *) &data[0] + data.size() * sizeof(T), buff);
//        print_hex((unsigned  char *)buff, data.size() * sizeof(T));

        //deserialize
        T * arr;
        arr = (T *) malloc( sizeof(T) * data.size());
        std::copy(buff, buff + sizeof(T) * data.size(), (char *) arr);
//        print_hex((unsigned char *) &arr[0], sizeof(T) * data.size());
//        dataBuff = std::string(buff);
//        print_hex((unsigned char *) dataBuff.c_str(), sizeof(T) * data.size());

    }
    void *serializeData();
    std::vector<T> *deSerializeData();
private:
    size_t sizeOfObject;
    size_t totalSize;
    std::vector<T> data;
    std::string dataBuff;


};


#endif //MAPFUNCTIONS_SERIALIZE_H
