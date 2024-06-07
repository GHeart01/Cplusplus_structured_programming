//
//  calculatePayroll.cpp
//  LawnCare_Geralt_Heart
//
//  Created by Geralt Heart on 6/6/24.
//

// Will calculate for any pay any hours.

#include <iostream>
#include <iomanip> //used openstack


using namespace std;

int main() {

    double hours, hourlyRate;
    double grossPay, tax, netPay, taxes;
    
    
    cout << "How many hours did you work and at what rate? "; // Ask User for input
    cin >> hours >> hourlyRate;  //Get User input and stores it
    cout << endl;

    grossPay = hours * hourlyRate; //before taxes
    tax = .15; // taxes = 15%
    taxes = tax * grossPay; // withholding tax
    netPay = grossPay - taxes;
    
    cout << fixed << setprecision(2);
    cout << "Your grossPay is: " << grossPay << endl;
    cout << "You paid: $" << taxes << " in taxes" << endl;
    cout << "Your netPay is: $" << netPay << endl;
    
    return 0;
}
