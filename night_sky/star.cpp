#include "star.hpp"

void Star::setXPos(u_short xPos){
    if(xPos < _xPos && xPos >= 0){
        this->_xPos = xPos;
    }
}

void Star::setYPos(u_short yPos){
    if(yPos < _yPos && yPos >= 0){
        this->_yPos = yPos;
    }
}

void Star::setBrightness(u_short brightness){
    if(brightness < 100 && brightness >= 0){
        this->_brightness = brightness;
    }
}

Star::Star(
    u_short xPos,
    u_short yPos,
    u_short brightness,
    u_short skyWidth,
    u_short skyHeight
) : _skyHeight(skyHeight) , _skyWidth(skyWidth){
    setXPos(xPos);
    setYPos(yPos);
    setBrightness(brightness);
}

u_short Star::getXPos(){ return this->_xPos; }
u_short Star::getYPos() { return this->_yPos; }
u_short Star::getBrightness() { return this->_brightness; }
