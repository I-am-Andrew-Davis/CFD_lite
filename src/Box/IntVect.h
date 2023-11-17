#ifndef INTVECT_H_
#define INTVECT_H_

#include <iostream>
#include <vector>
#include "SPACE.h"

class IntVect {

private:
    std::vector<int> m_vector;

public:

    //Constructor
    IntVect(D_DECL(int i, int j, int k));


    //*********Functions*********//


    //*********Operators*********//
   int operator[](const int a_i);

    //Add an Intvect to this Intvect
    IntVect& operator+=(IntVect& a_i);

    //Add a contants to this Intvect
    IntVect& operator+=(const int a_i);

    //Subtracts an Intvect from this Intvect
    IntVect& operator-=(IntVect& a_i);

    //subtracts a contants from this Intvect
   IntVect& operator-=(const int a_i);

    //performs the dot product on this intvect with
    //another intvect
   IntVect& operator*=(IntVect& a_i);

    //multiplies a contants onto this Intvect
   IntVect& operator*=(const int a_i);

    //divides invect component wise
    IntVect& operator/=(IntVect& a_i);

    //divides a contants onto this Intvect
    IntVect& operator/=(const int a_i);

    //*********Debugging*********//
    void print();


};


#endif // INTVECT_H_
