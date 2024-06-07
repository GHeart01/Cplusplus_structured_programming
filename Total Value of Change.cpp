//
//  Total Value of Change.cpp
//  Total Value of Change
//
//  Created by Geralt Heart on 6/6/24.
//

#include <iostream>

using namespace std;

int main() {
    int penny;
    int nickel;
    int dime;
    int quarter;
    float pennies;
    float nickels;
    float dimes;
    float quarters;
    float total;
    
    
    cout << "Please enter how many pennies, nickels, dimes, and quarters you have: " ;
    cin >> penny >> nickel >> dime >> quarter;
    cout << endl;
    
    pennies = penny * .01;
    nickels = nickel * .05;
    dimes = dime * .10;
    quarters = quarter * .25;
    total = pennies + nickels + dimes + quarters;
    
    cout << "Your total is: $" << total <<endl;
    
    return 0;
}
