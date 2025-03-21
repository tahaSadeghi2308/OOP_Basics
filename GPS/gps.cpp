#include "gps.hpp"

using namespace std;

Gps::Gps(short latitude , short longitude){
    if(latitude >= -90 && latitude <= 90 && longitude >= -180 && longitude <= 180){
        location.first = latitude;
        location.second = longitude;
    }
}