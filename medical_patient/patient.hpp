#ifndef MEDICAL_PATIENT_PATIENT_H
#define MEDICAL_PATIENT_PATIENT_H

typedef unsigned short u_short;

class Patient {
    float bodyTemprature;
    u_short heartRate;    
    u_short respiratoryRate;    
    u_short bloodPressure;
public:
    Patient(
        float bodyTemprature,
        u_short heartRate,    
        u_short respiratoryRate,    
        u_short bloodPressure
    );
        
};

#endif 
