// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/29/2022
// Description: This program uses object oriented programming in order to get a number of patient charges
// This program asks the user if they are an inpatient or an outpatient and based on this will ask the user
// a number of questions and output the total bill
// Time spent: Monday - Thursday

#include "Patient.h"

// Bool used (overloaded) to validate input for int variables
bool Patient::validateInput(int Input) {

	if (Input >= 0) {

		return true;
	}
	else {
		return false;
	}

}
// Bool used (overloaded) to validate input for double variables
bool Patient::validateInput(double Input) {

	if (Input >= 0) {

		return true;
	}
	else {
		return false;
	}
}


bool Patient::setDays(int d) {

	// calling validation
	if (validateInput(d)) {
		Days = d;
		return true;
	}
	else {
		
		return false;
	}
}

bool Patient::setRate(double r) {

	// calling validation
	if (validateInput(r)) {
		Rate = r;
		return true;
	}

	else {
		return false;
	}
}

bool Patient::setServices(double s) {

	// calling validation
	if (validateInput(s)) {
		Services = s;
		return true;
	}
	else {
		return false;
	}
}

bool Patient::setMedication(double m) {

	// calling validation
	if (validateInput(m)) {
		Medications = m;
		return true;
	}
	else {
		return false;
	}
}

bool Patient::setPatientType(char i) {

	// no need to call validation here (lab only says for int and double, so this is a simple if)
	if (i == 'I' || i == 'O') {
		return true;
	}
	else {
		return false;
	}
}

int Patient::getDays() {
	return Days;
}
double Patient::getMedication() {
	return Medications;
}
double Patient::getServices() {
	return Services;
}
double Patient::getRate() {
	return Rate;
}
char Patient::getPatientType() {
	return patientType;
}

// total charges function used to output total bill
double Patient::calcTotalCharges() {
	return (Days * Rate) + Services + Medications;
}