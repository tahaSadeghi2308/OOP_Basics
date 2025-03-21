#ifndef GPS_HPP
#define GPS_HPP

#include <vector>
#include <utility>

class Gps {
    std::pair<short , short> location;
public:
    Gps(short latitude , short longitude);
    ~Gps();
};

#endif