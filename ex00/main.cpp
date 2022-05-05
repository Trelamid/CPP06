#include <iostream>
#include "ToType.h"

int main(int ac, char **av) {
    if(ac == 2)
        ToType type(av[1]);

    return 0;
}
