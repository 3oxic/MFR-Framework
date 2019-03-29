//
// Created by ntallaris on 28/3/2019.
//

extern "C"{
void mapFunction1(void *data){
    int *test = (int *) data;
    *test = *test/2;
}
}

