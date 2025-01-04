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
				swap(unsortedvect[j], unsortedvect[j + 1]);
			}
		}
	}
	for (int k = 0; k <= unsortedvect.size() - 1; k++)
	{
		cout << *it << " ";
		it++;
	}
	 
}

void insertionsort(vector<float> unsorted) {

	vector<float>::iterator it = unsorted.begin();
	for (int i = 1; i < unsorted.size(); i++) {
		float key = unsorted[i];
		int k = i - 1;
		//shifting the sorted part for the key right position 
		while (k >= 0 && unsorted[k] > key) 
		{
			unsorted[k + 1] = unsorted[k];
			k--;
		}
		unsorted[k + 1] = key;
	}

	for (int k = 0; k <= unsorted.size() - 1; k++)
	{
		cout << *it << " ";
		it++;
	}
	
}
void selectionsort(vector<float> unsorted) {
	
	for (int i = 0; i < unsorted.size() - 1; i++) {
		int minIndex = i;

		for (int j = i + 1; j < unsorted.size(); j++) {
			if (unsorted[j] < unsorted[minIndex]) {
				minIndex = j;
			}
		}

		if (minIndex != i) {
			swap(unsorted[i], unsorted[minIndex]);
		}
	}
	vector<float>::iterator ss = unsorted.begin();
		cout << endl;
		for (int f = 0; f <= unsorted.size() - 1; f++) {
			cout << *ss << " ";
			ss++;
		}
}
int main()
{
	vector<float> vect = { 55, 24, 33, 44, 55,48,98,12,46,2,487,6,35 };
	selectionsort(vect);
	/*vector<float>::iterator ss = vect.begin();*/
	/*cout << endl;
	for (int f = 0; f <= vect.size() - 1; f++) {
		cout << *ss << " ";
		ss++;
	}*/
}

