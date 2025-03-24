#include "hospital.hpp"
#include <fstream>
#include <iostream>
using namespace std;

Hospital::Hospital(){
    ifstream file;
    file.open("../files/date.txt");
    if (file.is_open()){
        string name , para1 , para2 , para3 , para4;
        while(file >> name){
            file >> para1 >> para2 >> para3 >> para4;
            patients.push_back(Patient(name , para1 , para2 , para3 , para4));
            cout << "added one !!\n";
        }   
        file.close();
    }
    else {
        cout << "couldn't open file\n";
    }
    for (Patient &patient : patients){
        patient.doDestructor = true;
    }
}

void Hospital::showPatients(){
    if (patients.empty()){
        cout << "No patient !!\n";
    }
    else {
        for (Patient &patient : patients){
            cout << patient._name << '\n';
        }
    }
}

void Hospital::addPaitent(){
    string name;
    cout << "Enter patient name : "; getline(cin , name);
    patients.push_back(Patient(name));
}

Hospital::~Hospital(){
    for (Patient &patient : patients){
        patient.doDestructor = true;
    }
}