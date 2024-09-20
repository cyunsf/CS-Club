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

/*string noAdjDupes(string n)
{
	int length = n.length();

	int j = 0;

	for (int i = 0; i < length - 1; i++)
	{
		
	}
	return n;
}*/

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

int main()
{
	//cout << sumKtoN(5, 5) << endl;
	//cout << noAdjDupes("AAABBCA") << endl;

	//cout << add(1.25, 2);

	//cout << multiplication(30, 4) << endl;

	//bigPointQuestion();

	/*string myArray[10];
	for (int i = 0; i < 10; i++)
	{
		myArray[i] = "Christian";
	}
	myArray[9] = "Yun";
	int i = 9;
	while (i >= 0)
	{
		//cout << myArray[i] << endl;
		for (int j = myArray[i].length(); j >= 0; j--)
		{
			cout << myArray[i][j];
		}
		cout << endl;
		i--;
	}*/

	/*int list1[9]{10,20,30,40};
	int list2[20]{ 5,5,10,10 };
	int list3[14]{ 0,0,0,0 };
	arrayDiff(list1, list2, list3, 4);

	for (int i = 0; i < 4; i++)
	{
		cout << list3[i] << endl;
	}*/

	return 0;
}