#include <iostream>
#include"color.h"

using namespace std;

    Colour::Colour():
        m_r{0}, m_g{0}, m_b{0} {}

    Colour::Colour(int r,int g,int b):
        m_r{r}, m_g{g}, m_b{b} {}

    Colour::Colour(int r):
        m_r{r}, m_g{0},m_b{0} {}

    void Colour::invert()
    {
        m_r=255-m_r;
        m_g=255-m_g;
        m_b=255-m_b;
    }

    void Colour::display() const
    {
        cout<<"r="<<m_r<<endl;
        cout<<"g="<<m_g<<endl;
        cout<<"b="<<m_b<<endl;
    }

