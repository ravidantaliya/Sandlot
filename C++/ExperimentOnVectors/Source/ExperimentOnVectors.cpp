/*
 * \file ExperimentOnVectors.cpp
 *
 * \date 15-Mar-2018
 */

#include "ExperimentOnVectors.h"

int main()
{
	cout << "Initially size of vector is: " << ExpVector.size() << endl << endl;

	/*
	 * Insert 5 integers in ExpVector
	 */
	for(int i = 0; i < 5; i++){

		ExpVector.push_back(i);
	}

	cout << "Extended size of vector is: " << ExpVector.size() << endl << endl;

	/*
	 * Print ExpVector
	 */
	int SizeOfVector = ExpVector.size();

	for(int i = 0; i < SizeOfVector; i++){
		cout << "ExpVector[" << i << "] = " << ExpVector[i] << endl;
	}

	return 0;
}




