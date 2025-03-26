#ifndef SKY_HPP
#define SKY_HPP

#include <vector>
#include "star.hpp"
typedef unsigned short u_short;

class Sky {
    // width and height has default value 
    u_short _width  {20};
    u_short _height {20};
    std::vector<std::vector<Star>> stars;
public:
    Sky();
    void display();
    std::vector<std::vector<Star>> getStars();
};

#endif