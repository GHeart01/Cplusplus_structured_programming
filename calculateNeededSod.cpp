//
//  calculateNeededSod.cpp
//  LawnCare_Geralt_Heart
//
//  Created by Geralt Heart on 6/6/24.
//


#include <iostream>

using namespace std;

int main()
{
    //for any lot
    int width; //variable to width of yard
    int depth; // variable to store depth of yard
    int house; //variable to store how much land will be taken by the house
    int area; //holding variable (not to be displayed)
    int net_area; //variable to display area to cover with pallets
    int pallet_cost; // price of pallets
    int pallet_coverage; //square feet covered by pallets
    
    cout << "Enter width (feet) and depth (feet) of your yard, area of your house, pallet cost(USD$), pallet coverage (square feet); then press Enter: "; //prompt the user to enter data
    cin >> width >> depth >> house >> pallet_cost >> pallet_coverage;  //store the value entered by the user into the variable feet
    cout << endl;
    
    area = width * depth; //square feet
    net_area = area - house; //square feet
//    pallet_cost = 450; //USD
//    pallet_coverage = 450; //square feet
    
    cout << width << " feet wide \n" ;  //repeats the user's input value for width confirmation
    
    cout << depth << " feet deep and \n"; //repeats the user's input value for depth confirmation
    
    cout << "You have " << net_area  << " square feet that needs to be convered by pallets " <<endl; //Outputs area calculation
    
    cout << "You will need " << net_area / pallet_coverage << " pallets" <<endl; //Outputs pallets to purchase
    
    cout << "Your total today will be $ " << (net_area / pallet_coverage) * pallet_cost << endl; //Outputs price
    

    return 0;
}


