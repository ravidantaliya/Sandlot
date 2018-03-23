/*
 * \file ExperimentOnMap.cpp
 *
 * \date 16-Mar-2018
 */

#include "ExperimentOnMap.h"

int main()
{
	/*
	 * Assign values to map
	 */
	alphaNumericMap = {
		{'a', 1},
		{'b', 2},
		{'c', 3},
		{'d', 4},
		{'e', 5}
	};

	/*
	 * Size of the map
	 */
	cout << "Size of map: " << alphaNumericMap.size() << endl << endl;

	/*
	 * Printing map
	 */
	cout << "\tKey \t Value" << endl;

	for(itr = alphaNumericMap.begin(); itr != alphaNumericMap.end(); itr++){

		cout << "\t" << itr->first << "\t\t " << itr->second << "\n";
	}

	/*
	 * Include another map which takes key and value as an integer.
	 */
	numericMap.insert(pair <int, int> (1, 1));
	numericMap.insert(pair <int, int> (2, 4));
	numericMap.insert(pair <int, int> (3, 9));
	numericMap.insert(pair <int, int> (4, 16));

	cout << "\n\tNum Square" << endl;

	for(itrNumber = numericMap.begin(); itrNumber != numericMap.end(); itrNumber++){

		cout << "\t" << itrNumber->first << "\t" << itrNumber->second << "\n";
	}

	return 0;
}

