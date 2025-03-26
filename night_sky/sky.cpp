#include "sky.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

Sky::Sky(){
    for(int i {0}; i < this->_height; i++){
        vector<Star> col;
        srand(time(NULL));
        for(int j {0}; j < this->_width; j++){
            col.push_back(Star(i , j , (rand() % 100) + 1));
        }
        stars.push_back(col);    
    }
}

void Sky::display(){
    for(auto const row : stars){
        for(Star star : row){
            if(star.getBrightness() < 60){
                cout << ' ';
            }
            else {
                cout << '*';
            }
        }
        cout << '\n';
    }
}

vector<vector<Star>> Sky::getStars(){ return this->stars; }