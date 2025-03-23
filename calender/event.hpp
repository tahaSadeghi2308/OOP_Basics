#ifndef EVENT_HPP
#define EVENT_HPP

#include <iostream>
#include <ctime>

typedef unsigned short u_short;

class Event {
    std::string _name;
    time_t _eventStart;
    time_t _eventEnd;    
    std::string getTime();
    time_t convertToTime(const char *time);
    std::string convertToString(time_t time);
public:
    bool invoikDestructor {false};
    Event(std::string name);
    Event(std::string name , time_t start , time_t end);
    time_t getStart();
    time_t getEnd();
    std::string getName();
    ~Event();
};

#endif