#include <iostream>
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"
#include <iostream>
#include <cstdlib>

Base	*generate( void )
{
    int	selected = std::rand() % 3;
    if (selected == 0)
        return new A();
    else if (selected == 1)
        return new B();
    else if (selected == 2)
        return new C();
    else
        throw new std::exception();
}
void	identify( Base &p )
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::exception &e)
    {
        (void)e;
    }
}
void	identify( Base *p )
{
    A *a;
    if ((a = dynamic_cast<A *>(p)))
        std::cout << "A" << std::endl;
    B *b;
    if ((b = dynamic_cast<B *>(p)))
        std::cout << "B" << std::endl;
    C *c;
    if ((c = dynamic_cast<C *>(p)))
        std::cout << "C" << std::endl;
}



int main() {
//    Base *e= new A();
    Base *r = generate();
    identify(r);
    identify(*r);
    return 0;
}
