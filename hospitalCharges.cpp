// My Name: Mathew Breland
// My Class: CPSC 1021
// Date: 9/29/2022
// Description: This program uses object oriented programming in order to get a number of patient charges
// This program asks the user if they are an inpatient or an outpatient and based on this will ask the user
// a number of questions and output the total bill
// Time spent: Monday - Thursday

#include <iostream>
#include <iomanip>

#include "Patient.h"

using namespace std;

int main() {

	int Days;

	double Rate;
	double Medications;
	double Services;

	char patientType;

	cout << "This program will calculate a patient's hospital charges.\n";

	// Asking user for input of in-patient or out patient
	cout << "Enter I for in-patient or O for out-patient: ";
	cin >> patientType;

	// Creating an object inside of class Patient
	Patient Obj1;
	
	// Validation for user input of deciding if inpatient or outpatient
	while (Obj1.setPatientType(patientType) == false) {

		cout << "Please enter a correct choice\n";
		cout << "Enter I for in-patient or O for out-patient: ";
		cin >> patientType;
	}

	if (patientType == 'I') {

		// Asks user for number of days in the hospital
		cout << "Number of days in the hospital: ";
		cin >> Days;


			// calls setDay to verify if input is valid
			while(Obj1.setDays(Days) == false) {
			
				cout << "Number of days in the hospital: ";
				cin >> Days;

				}

		// Asks uer for daily room rate
		cout << "Daily room rate ($): ";
		cin >> Rate;


			// calls setRate to verify if input is valid
			while (Obj1.setRate(Rate) == false) {

				cout << "Daily room rate ($): ";
				cin >> Rate;
			}

		// Asks user for lab fees and other service charges
		cout << "Lab fees and other service charges ($): ";
		cin >> Services;


			// calls set services to verify if input is valid
			while (Obj1.setServices(Services) == false) {

				cout << "Lab fees and other service charges ($): ";
				cin >> Services;

				}

		// Asks user for the medication charges
		cout << "Medication charges ($): ";
		cin >> Medications;


			// calls setMedications to verify if input is valid
			while (Obj1.setMedication(Medications) == false) {

				cout << "Medication charges ($): ";
				cin >> Medications;

			}

			// outputs the total bill for inpatients
			cout << "Your total hospital bills is $" << Obj1.calcTotalCharges() << endl;
	}

	// if statement if user is outpatient 
	if (patientType == 'O') {

		// Asks user for lab fees and other service charges
		cout << "Lab fees and other service charges ($): ";
		cin >> Services;


			// calls set services to verify if input is valid
			while (Obj1.setServices(Services) == false) {

				cout << "Lab fees and other service charges ($): ";
				cin >> Services;

			}

		// Asks user for the medication charges
		cout << "Medication charges ($): ";
		cin >> Medications;


			// calls setMedications to verify if input is valid
			while (Obj1.setMedication(Medications) == false) {

				cout << "Medication charges ($): ";
				cin >> Medications;

			}

			// outputs the total bill for outpatients
			cout << "Your total hospital bills is $" << Obj1.calcTotalCharges() << endl;
	}


	return 0;
}