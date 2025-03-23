#include "calender.hpp"
#include <iostream>

int main(int argc , char *argv[]){
    Calender calender;
    calender.add_event();
    calender.add_event();
    calender.refresh();
    calender.add_event();
    calender.add_event();
    return 0;
}