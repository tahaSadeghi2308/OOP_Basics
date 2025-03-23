#include "patient.hpp"
#include <iostream>
#include <fstream>

using namespace std;

string Patient::cipher(string cipherText){
    string realText;
    for(char ch : cipherText){
        realText += (ch ^ 'q');
    }
    return realText;
}

Patient::Patient(
    string name,
    string bodyTemprature,
    string heartRate,
    string respiratoryRate,   
    string bloodPressure
): _name(name) {
    _bodyTemprature = stof(cipher(bodyTemprature));
    _heartRate = stoi(cipher(heartRate)), 
    _respiratoryRate = stoi(cipher(respiratoryRate)),
    _bloodPressure = stoi(cipher(bloodPressure));

    cout << "-------------------------------------------\n";
    cout << "Patient name : " << name << '\n';
    
    if (_bodyTemprature >= 36.0 && _bodyTemprature <= 37.5){
        cout << "Body temprature : normal \n";
    } else {
        cout << "Body temprature : not normal \n";
    }
    
    if (_heartRate >= 60 && _heartRate <= 100){
        cout << "Heart rate : normal \n";
    } else {
        cout << "Heart rate : not normal \n";
    }

    if (_respiratoryRate >= 16 && _respiratoryRate <= 20){
        cout << "Respiratory rate : normal \n";
    } else {
        cout << "Respiratory rate : not normal \n";
    }

    if (_bloodPressure >= 80 && _bloodPressure <= 120){
        cout << "Blood pressure : normal \n";
    } else {
        cout << "Blood pressure : not normal \n";
    }
}

Patient::~Patient(){
    ofstream file;
    file.open("../files/date.txt");
    if(file.is_open()){
        file << _name << " " << cipher(to_string(_bodyTemprature)) << " " << cipher(to_string(_heartRate)) << " " <<cipher(to_string(_respiratoryRate)) << " " << cipher(to_string(_bloodPressure)) << '\n';
        file.close();
    }     
    else {
        cout << "couldn't open file\n";
    }  
}