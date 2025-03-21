#ifndef CALENDER_HPP
#define CALENDER_HPP

#include "event.hpp"
#include <vector>

class Calender {
    std::vector<Event> _events;
public:
    void add_event();
    void refresh();
};

#endif