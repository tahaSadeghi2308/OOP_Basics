#ifndef MEDICAL_PATIENT_HOSPITAL_H
#define MEDICAL_PATIENT_HOSPITAL_H

#include <vector>
#include "patient.hpp"
class Hospital {
    std::vector<Patient> patients;
public:
    Hospital();
    void showPatients();
    void addPaitent();
    ~Hospital();
};

#endif
