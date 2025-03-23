#ifndef MEDICAL_PATIENT_PATIENT_H
#define MEDICAL_PATIENT_PATIENT_H

#include <string>

typedef unsigned short u_short;

class Patient {
    std::string _name;
    float _bodyTemprature;
    u_short _heartRate;
    u_short _respiratoryRate;   
    u_short _bloodPressure;
    std::string cipher(std::string cipherText);
public:
    Patient(
        std::string name,
        std::string bodyTemprature,
        std::string heartRate,
        std::string respiratoryRate,   
        std::string bloodPressure
    );
    ~Patient();
};

#endif 
