//
// Created by Prime_Games_2 on 05.05.2022.
//

#include "ToType.h"

ToType::ToType(const char *s) {
    this->s = s;

    if(IsInt())
        FromInt();
    else if(IsChar())
        FromChar();
    else if(IsFloat())
        FromFloat();
    else if(IsDouble())
        FromDouble();
    else if(!strcmp(s, "nan") || !strcmp(s, "nanf"))
    {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
        return;
    }
    else
        throw std::runtime_error("Not Valid Arguments");

    print();
}

ToType::~ToType() {

}

int ToType::FromInt() {
    _int = atoi(s);
    _char = (char)_int;
    _float = (float)_int;
    _double = (double)_int;
    return 0;
}

char ToType::FromChar() {
    _char = *s;
    _int = (unsigned char)_char;
    _float = (float)_int;
    _double = (double)_int;
    return 0;
}

float ToType::FromFloat() {
    _float = atof(s);
    _int = (int)_float;
    _char = (char)_int;
    _double = (double)_float;
    return 0;
}

double ToType::FromDouble() {
    _float = atof(s);
    _int = (int)_float;
    _char = (char)_int;
    _double = (double)_float;
    return 0;
}

void ToType::print() {
std::cout << "char : ";
    if(_char != 0)
        std::cout << _char << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
std::cout << "int : " << _int << std::endl;
std::cout << "float : " << _float << std::endl;
std::cout << "double : " << _double << std::endl;
}

int ToType::IsInt() {
    int i = 0;
    while (s[i])
    {
        if(i == 0 && (s[i] == '-' || s[i] == '+'))
            i++;
        if(s[i] < 48 || s[i] > 57)
            return false;
        i++;
    }
    return true;
}

int ToType::IsFloat() {
    int i = 0;
    while (s[i])
    {
        if(i == 0 && (s[i] == '-' || s[i] == '+'))
        {
            if(s[1] == '.')
                return false;
            i++;
        }
        if((s[i] < 48 || s[i] > 57) && s[i] != '.')
        {
            if(s[i] == 'f' && s[i + 1] == '\0')
            {

            }
            else
                return false;
        }
        i++;
    }
    if(s[0] == '.' || s[i - 1] != 'f' || s[i - 2] == '.')
        return false;
    return true;

}

int ToType::IsDouble() {
    int i = 0;
    while (s[i])
    {
        if(i == 0 && (s[i] == '-' || s[i] == '+'))
            i++;
        if((s[i] < 48 || s[i] > 57) && s[i] != '.')
            return false;
        i++;
    }
    if(s[0] == '.' || s[i - 1] == '.')
        return false;
    return true;
}

int ToType::IsChar() {
    if(s[0] != '\0' && s[1] == '\0')
        return true;
    return false;
}
