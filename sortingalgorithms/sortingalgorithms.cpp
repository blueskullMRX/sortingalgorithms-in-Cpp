// sortingalgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


void bubblesort(vector<float> unsortedvect) {
	vector<float>::iterator it = unsortedvect.begin();
	for (int i = 0; i < unsortedvect.size()-1; i++) {
		
		for (int j = 0; j < unsortedvect.size()-i-1;j++ )
		{
			float temp = unsortedvect[j];
			if (unsortedvect[j] > unsortedvect[j + 1]) {
				unsortedvect[j] = unsortedvect[j + 1];
				unsortedvect[j + 1] = temp;
			}
		}
	}
	for (int k = 0; k <= unsortedvect.size() - 1; k++) {
		cout << *it << " ";
		it++;
	}
	 
}

void selectionsort(vector<float>)
int main()
{
	vector<float> vect = { 55, 24, 33, 44, 55,48,98,12,46,03,487,6,35 };
	bubblesort(vect);

	

}

