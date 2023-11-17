#include "IntVect.h"
#include "SPACE.h"
#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{

    IntVect iv1(D_DECL(2, 8, 3));
    iv1.print();
    IntVect iv2(D_DECL(9, 4, 7));
    iv2.print();

    iv1+=iv2;
    iv1.print();
    iv2.print();
    iv2+=iv1;
    iv1.print();
    iv2.print();

}
