#include <iostream>
#include "Data.h"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data data("auf");
    Data *test;
    uintptr_t	raw;

    raw = serialize(&data);
    test = deserialize(raw);

    std::cout << data.s<<std::endl;
    std::cout << test->s<<std::endl;

    return 0;
}
