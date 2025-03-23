#ifndef CALENDER_HPP
#define CALENDER_HPP

#include "event.hpp"
#include <vector>

class Calender {
    public:
    std::vector<Event> _events;
    Calender();
    ~Calender();
    void add_event();
    void refresh();
    void collectAll();
    void saveAll();

};

#endif