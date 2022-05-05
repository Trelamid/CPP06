//
// Created by Prime_Games_2 on 05.05.2022.
//

#ifndef EX00_TOTYPE_H
#define EX00_TOTYPE_H

#include <iostream>
#include <cstring>
#include <stdlib.h>

class ToType {
private:
    const char *s;
    int type; // 1 = char, 2 = int, 3 = float, 4 = double
    char _char;
    int _int;
    float _float;
    double _double;
public:
    ToType(const char *s);
    ~ToType();

    void print();

    int IsInt();
    int IsFloat();
    int IsDouble();
    int IsChar();


    int FromInt();
    char FromChar();
    float FromFloat();
    double FromDouble();
};


#endif //EX00_TOTYPE_H
