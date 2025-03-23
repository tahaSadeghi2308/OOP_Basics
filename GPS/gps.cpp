#include "gps.hpp"
#include <iostream>
#include <sstream>
#include <cctype>
#include <format>

using namespace std;

bool isNumber(string str){
    if (str[0] == '-' || str[0] == '+'){
        string newStr;
        for(auto ch : str){
            if(ch == '-' || ch == '+'){
                continue;
            }
            else {
                newStr += ch;
            }
        }
        for(auto ch : newStr){
            if(!isdigit(ch)){
                return false;
            }
        }
    }
    return true;
}

Gps::Gps(){
    while(true) {
        string command; 
        cout << "ENTER a location : "; getline(cin , command);
        if (command == "q"){
            break;
        }
        stringstream stream(command);
        string first , second , rest; 
        stream >> first;
        stream >> second;
        getline(stream , rest);
        if (rest == "" && second != "" && first != ""){
            if (isNumber(first) && isNumber(second)){
                int int_first = stoi(first);
                int int_second = stoi(second);
                if (int_first >= -90 && int_first <= 90 && int_second >= -180 && int_second <= 180){
                    pair<int , int> temp;
                    temp.first = int_first;
                    temp.second = int_second;
                    locations.push_back(temp);
                }
                else {
                    cout << "Invalid location !!\n";
                }
            }
            else {
                cout << "you should enter a number !!\n";
            }
        }
        else {
            cout << "Invalid command !!\n";
        }
    }
}

Gps::~Gps(){
    if (!locations.empty()){
        pair<int , int> temp = locations.back();
        cout << "the last location is " << temp.first <<  " , " << temp.second << '\n';
    }
    else {
        cout << "There is no location currently !!\n";
    }
}