#include <iostream>

using namespace std;

int main (int argcount, char** argvector) {

	// basic variables, weighting factor of the population and initial its initial values
	double x;

	// iterate different values of r
	for (double r = 0; r <= 4; r+=0.01) {

		// reinitialize value of x
		x = 0.5;

		// iterate all values from 1 to 100
		for (int i=1; i<=100; i++) {

			// calculate new value of x
			x = x*r*(1-x);

			// check if we should output to user, continue loop if not
			if (i < 20)
				continue;

			// output to user
			cout << r << "\t" << x << endl;
		}

		// insert empty line
		cout << endl;
	}	

	// return to caller 
	return 0;
}