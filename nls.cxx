
// Imports and name space description
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


// Section to define the needed functions




// main function
int main() {
	// Define variables for 
	/* int a = 10;
	int b = 28;
	double c = 8/3; */
	// Define the Butcher tableau
	// b values -> coefficients for dt
	double b [] = {0 , 0.5, 0.5, 1};
	// c values -> coeffitions for weigthed sum of K's
	double c [] = {1/6, 1/3, 1/3, 1/6};
	// A matrix -> coefficients for K's
	double A [] = {0, 0, 0, 0, 0.5, 0, 0, 0, 0, 0.5, 0, 0, 0, 0, 1, 0};
	
	
	
	return 0;
}

// Section to implement the functions