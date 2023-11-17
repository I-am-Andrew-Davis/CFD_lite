#include "IntVect.h"
#include <cassert>

IntVect::IntVect(D_DECL(int i, int j, int k)){
    m_vector.reserve(SPACEDIM);
    D_EXPR(m_vector[0]=i, m_vector[1]=j, m_vector[2]=k);

}

//Useful for debugging
void
IntVect::print(){


    #if SPACEDIM==1
    std::cout << "(" << m_vector[0] << ")" << std::endl;
    #elif SPACEDIM==2
    std::cout << "(" << m_vector[0] << ", "<< m_vector[1]  << ")" << std::endl;
    #elif SPACEDIM==3
    std::cout << "(" << m_vector[0] << ", "<< m_vector[1] << ", "<< m_vector[2] << ")" << std::endl;
    #endif
}

//Add an Intvect to this Intvect
IntVect&
IntVect::operator+=(IntVect& a_i){
    D_EXPR(m_vector[0]+=a_i[0],
           m_vector[1]+=a_i[1],
           m_vector[2]+=a_i[2]);
    return *this;
}

//Add a constant to this Intvect
IntVect&
IntVect::operator+=(const int a_i){
    D_EXPR(m_vector[0]+=a_i,
           m_vector[1]+=a_i,
           m_vector[2]+=a_i);
    return *this;
}

//subtract an Intvect to this Intvect
IntVect&
IntVect::operator-=(IntVect& a_i){
    D_EXPR(m_vector[0]-=a_i[0],
           m_vector[1]-=a_i[1],
           m_vector[2]-=a_i[2]);
    return *this;
}

//subtract a constant to this Intvect
IntVect&
IntVect::operator-=(const int a_i){
    D_EXPR(m_vector[0]-=a_i,
           m_vector[1]-=a_i,
           m_vector[2]-=a_i);
    return *this;
}

//performs the dot product on this intvect
IntVect&
IntVect::operator*=(IntVect& a_i){
    D_EXPR(m_vector[0]=m_vector[0]*a_i[0],
           m_vector[1]=m_vector[1]*a_i[1],
           m_vector[2]=m_vector[2]*a_i[2]);
    return *this;
}

//multiply a constant onto this Intvect
IntVect&
IntVect::operator*=(const int a_i){
    D_EXPR(m_vector[0]=m_vector[0]*a_i,
           m_vector[1]=m_vector[1]*a_i,
           m_vector[2]=m_vector[2]*a_i);
    return *this;
}

//divide intvect component wise
IntVect&
IntVect::operator/=(IntVect& a_i){
    D_EXPR(m_vector[0]=m_vector[0]/a_i[0],
           m_vector[1]=m_vector[1]/a_i[1],
           m_vector[2]=m_vector[2]/a_i[2]);
    return *this;
}

//divide a constant onto this Intvect
IntVect&
IntVect::operator/=(const int a_i){
    D_EXPR(m_vector[0]=m_vector[0]/a_i,
           m_vector[1]=m_vector[1]/a_i,
           m_vector[2]=m_vector[2]/a_i);
    return *this;
}

int
IntVect::operator[](const int a_i){
    assert(a_i < SPACEDIM);
    return m_vector[a_i];
}
