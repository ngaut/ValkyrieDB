#ifndef PROJECT_DATATYPES_H
#define PROJECT_DATATYPES_H

#include <cstdint>

using namespace std;

typedef enum {
    LONG,
    DOUBLE,
    STRING,
    DATE
} DataType;

typedef int64_t LeafValue;

typedef struct tuplePointer {
    int64_t ptr;
    size_t att_count;
    size_t tup_count;
} TupPtr;

#endif //PROJECT_DATATYPES_H
