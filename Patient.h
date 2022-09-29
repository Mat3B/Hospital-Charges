// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/29/2022
// Description: This program uses object oriented programming in order to get a number of patient charges
// This program asks the user if they are an inpatient or an outpatient and based on this will ask the user
// a number of questions and output the total bill
// Time spent: Monday - Thursday

#ifndef	PATIENT_H
#define PATIENT_H
#include <iostream>

class Patient {

// Private variables
private:

	// In class initialization of variables
	char patientType{ 'I' };

	int Days{ 0 };

	double Rate{ 0.0 };
	double Services{ 0.0 };
	double Medications{ 0.0 };


	bool validateInput(int);
	bool validateInput(double);

// Public member functoins
public:

	Patient() = default;

	Patient(char i, int d, double r, double s, double m) :
		patientType{ i }, Days{ d }, Rate{ r }, Services{ s }, Medications{ m } {};

	Patient(char i, double s, double m) :
		patientType{ i }, Services{ s }, Medications{ m } {};


	bool setDays(int);

	bool setRate(double);
	bool setServices(double);
	bool setMedication(double);

	bool setPatientType(char);


	int getDays();

	double getRate();
	double getServices();
	double getMedication();

	char getPatientType();

	double calcTotalCharges();

};


#endif