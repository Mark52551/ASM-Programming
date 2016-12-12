// Listing: Main.cpp
#include <iostream>
#include <ctime>
using namespace std;

// External procedure defined in asmfunctions.asm
extern "C" int FindSmallest(int* i, int count);

const unsigned ARRAY_LENGTH = 10;

int main() {
	
	int arr[ARRAY_LENGTH] = { 4, 2, 6, 4, 5, 1, 8, 9, 5, -5 };
		cout << "Smallest is " << FindSmallest(arr, ARRAY_LENGTH) << endl;
	cin.get();
	return 0;

}void MakeData(){		int v1;	int v2;	v1 = rand() % 100;	v2 = rand() % -100;	}