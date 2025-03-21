#include "calender.hpp"
using namespace std;

void Calender::add_event(){
    string name; cin >> name;
    Event temp(name);
    bool isConflict {false};
    for(Event event: this->_events){
        if (event.getName() == name){
            cout << "Can not add this event because there is another event with same name\n";
            isConflict = true;
        }
        else if (event.getStart() >= temp.getStart() && event.getEnd() <= temp.getEnd()){
            cout << "Time conflict !!!!\n";
            isConflict = true;
        }
    }
    if (!isConflict){
        _events.push_back(temp);
        cout << "a new event added !!!\n";
    }
}

void Calender::refresh(){
    time_t currentTime = time(NULL);
    short itemIndex {0};
    for(Event event : _events){
        if (event.getEnd() < currentTime){
            _events.erase(_events.begin() + itemIndex);
        }
        itemIndex++;
    }
}