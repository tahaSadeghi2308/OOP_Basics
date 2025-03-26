#include "star.hpp"

void Star::setXPos(u_short xPos){
    this->_xPos = xPos;
}

void Star::setYPos(u_short yPos){
    this->_yPos = yPos;
}

void Star::setBrightness(u_short brightness){
    this->_brightness = brightness;
}

Star::Star(
    u_short xPos,
    u_short yPos,
    u_short brightness
){
    setXPos(xPos);
    setYPos(yPos);
    setBrightness(brightness);
}

u_short Star::getXPos(){ return this->_xPos; }
u_short Star::getYPos() { return this->_yPos; }
u_short Star::getBrightness() { return this->_brightness; }
