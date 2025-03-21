#include "event.hpp"

using namespace std;

time_t Event::getStart (){ return this->_eventStart; }
time_t Event::getEnd (){ return this->_eventEnd; }
string Event::getName (){ return this->_name; }

u_short getData(string prompt , string range = ""){
    u_short data;
    while (true){
        cout << prompt;
        cin >> data;
        if(data > 0){
            if (range == "m"){
                if (data >= 1 && data <= 12){
                    return data;
                }
            }
            else if (range == "d"){
                if (data >= 1 && data <= 30){
                    return data;
                }
            }
            else if (range == "h"){
                if (data >= 1 && data <= 24){
                    return data;
                }
            }
            else if (range == "M" || range == "s"){
                if (data >= 0 && data <= 59){
                    return data;
                }
            }
            return data;
        }
        cout << "Invalid value entered\n";
    }
}

string Event::getTime(){
    string enteredTime;
    string parameters[6];
    parameters[0] = to_string(getData("Year: "));
    parameters[1] = to_string(getData("Month: " , "m"));
    parameters[2] = to_string(getData("Day: " , "d"));
    parameters[3] = to_string(getData("Hour: " , "h"));
    parameters[4] = to_string(getData("Minute: " , "M"));
    parameters[5] = to_string(getData("Second: " , "s"));
    enteredTime += (parameters[0]);
    enteredTime += ("-");
    enteredTime += (parameters[1]);
    enteredTime += ("-");
    enteredTime += (parameters[2]);
    enteredTime += (" ");
    enteredTime += (parameters[3]);
    enteredTime += (":");
    enteredTime += (parameters[4]);
    enteredTime += (":");
    enteredTime += (parameters[5]);
    return enteredTime;
}

time_t Event::convertToTime(const char *time){
    tm tmStruct;
    const char *format {"%Y-%m-%d %H:%M:%S"};
    strptime(time, format, &tmStruct);
    return mktime(&tmStruct);
}

Event::Event(string name) : _name(name){
    while (true){
        cout << "enter start time..........\n";
        time_t start {convertToTime(getTime().c_str())};
        cout << "enter end time...........\n";
        time_t end {convertToTime(getTime().c_str())};
        if (end > start){
            this->_eventStart = start;
            this->_eventEnd = end;
            break;    
        }    
        else {
            cout << "Dude what the fuck ???\n";
        }
    }
}

string Event::convertToString(time_t time){
    char buffer[90];
    const char *format {"%Y-%m-%d %H:%M:%S"};
    struct tm* timeinfo = localtime(&time);
    strftime(buffer, sizeof(buffer), format, timeinfo);
    return buffer;
}

Event::~Event(){
    cout << "Evnet with name " << this->_name << " and start time " << convertToString(this->_eventStart) << " has been deleted\n";
}