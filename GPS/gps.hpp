#ifndef GPS_HPP
#define GPS_HPP

#include <vector>
#include <utility>

class Gps {
    std::vector<std::pair<int , int>> locations;
public:
    Gps();
    ~Gps();
};

#endif