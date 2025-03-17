#ifndef STAR_HPP
#define STAR_HPP

typedef unsigned short u_short;

class Star { 
    u_short _xPos;
    u_short _yPos;
    u_short _brightness;
    u_short _skyWidth;
    u_short _skyHeight;
public:
    Star(
        u_short xPos,
        u_short yPos,
        u_short brightness,
        u_short skyWidth,
        u_short skyHeight
    );
    u_short getXPos();
    u_short getYPos();
    u_short getBrightness();
    void setXPos(u_short xPos);
    void setYPos(u_short yPos);
    void setBrightness(u_short brightness);
};


#endif