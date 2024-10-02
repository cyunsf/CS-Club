#include <iostream>
#include <string>

using namespace std;

int sumKtoN(int k, int n)
{
	int sum = k + n;

	if (n == k)
	{
		return sum;
	}

	if (n > k)
	{
		return sum + sumKtoN(k, n - 1);
	}
	else if (k > n)
	{
		return sum + sumKtoN(k - 1, n);
	}
}

int multiplication(int x, int y)
{
	if (y <= 1)
	{
		return x;
	}
	
	return x + multiplication(x, y - 1);
}

template <typename T1, typename T2>
auto add(T1 a, T2 b)
{
	return a + b;
}

template <typename T1, typename T2>
auto arrayDiff(T1 listOne, T1 listTwo, T1 listThree, T2 count)
{
	for (int i = 0; i < count; i++)
	{
		listThree[i] = listOne[i] - listTwo[i];
	}
}

void shiftLeft(int list[], int x)
{
	int temp = list[0];
	for (int i = 0; i < x - 1; i++)
	{
		list[i] = list[i + 1];
	}
	list[x - 1] = temp;
}

void bigPointQuestion()
{
	cout << "Please type in a string and press enter when you are done" << endl;
	string input;
	getline(cin, input);
	cout << endl;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'a')
		{
			cout << input[i] << endl;
		}
		else if (i % 4 == 0)
		{
			cout << input[i] << endl;
		}
		else if (input[i - 1] == ' ')
		{
			cout << input[i] << endl;
		}
		else if (input[i] == 'w' || input[i] == 'W')
		{
			cout << input[i] << endl;
		}
		else if (input[i] == 'u' && input[i - 1] == 'q')
		{
			cout << input[i] << endl;
		}
	}
}

int missingNumber(int nums[]) {
	int numsLength = sizeof(nums);
	int i = 0;
	int numChecker = 0; //pick a number and check if it's in the array, let's start at 0

	while (i <= numsLength) { //traverse through the array
		if (numChecker == nums[i]) {
			numChecker++;	//if the number we picked does exist in the array, check the next number up
			i = 0;			//and reset our traversal so we check the array starting at the beginning again
		}
		i++; //make sure we can exit our while loop
	}
	return numChecker; //we've been through the array and couldn't match the current number, this must be the missing number
}

int main()
{
	int nums[]{ 3,0,1 };
	//int nums[]{ 0,1 };
	//int nums[]{ 9,6,4,2,3,5,7,0,1 };
	std::cout << missingNumber(nums) << std::endl;

	return 0;
}