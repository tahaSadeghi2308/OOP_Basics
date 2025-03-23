#include "calender.hpp"
#include <fstream>
using namespace std;

Calender::Calender(){
    this->collectAll();
}

Calender::~Calender(){
    this->saveAll();
    for(Event &event : _events){
        event.invoikDestructor = true;
    }
}

void Calender::add_event(){
    string name;
    cout << "enter event name : ";cin >> name;
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

void Calender::saveAll(){
    ofstream file;
    file.open("../files/data.txt"); // relating from build folder
    if (file.is_open()){
        for(Event &event : _events){
            file << event.getName() << " " << event.getStart() << " " << event.getEnd() << '\n'; 
        }
        file.close();
    }
    else {
        cout << "couldn't open file for saving !!!\n";
    }
}

void Calender::collectAll(){
    ifstream file;
    file.open("../files/data.txt");
    if (file.is_open()){
        string name;
        while(file >> name){
            time_t start , end;
            file >> start >> end;
            Event temp(name , start , end);
            _events.push_back(temp);
        }
        file.close();
    }
    else {
        cout << "couldn't open file for collecting !!!!\n";
    }
}