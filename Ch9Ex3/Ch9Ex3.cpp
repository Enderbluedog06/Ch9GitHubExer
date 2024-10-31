// William Patrick, 10/23/2024
#include <iostream>
using namespace std;
int modeCalc(int* arr, int x);
int main() {

	int numbers[12] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11};
	int nums = 12;
	int* numbersPtr = numbers;


	int mode = modeCalc(numbersPtr, nums);
	if (mode == -1)
	{
		cout << "There is no mode in the array";
	}
	else
	{
		cout << "The mode is: " << mode << "\n";
	}

	return 0;
}
int modeCalc(int* arr, int x)
{
	int instances = 0;
	int pos = 0;
	for (int i = 0; i < x; i++)
	{
		int tempInstances = 0;
		int tempPos = 0;
		for (int ii = 0; ii < x; ii++)
		{
			if (arr[ii] == arr[i])
			{
				tempInstances++;
				tempPos = i;
			}
		}
		if (tempInstances > instances)
		{
			instances = tempInstances;
			pos = tempPos;
		}
	}
	if (instances > 1)
	{
		return arr[pos];
	}
	else {
		return -1;
	}

	return 0;
}