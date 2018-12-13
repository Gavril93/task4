#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const char symb = ':';
	int pos = 0;
	vector<string> arr;
	string tempKey;
	string tempValue;
	string myString;
	ifstream inputFile("input.txt");
	ofstream outputFile("output.txt");
	while (!inputFile.eof())
	{
		getline(inputFile, myString);
		arr.push_back(myString);
	}
	for (int i = 0; i < size(arr); i++)
	{
		pos = arr[i].find_first_of(symb, 0);
		tempKey = arr[i].substr(0, pos);
		tempValue = arr[i].substr(pos + 1, arr[i].length());
		outputFile << "Key: " << tempKey << " " << "Value: " << tempValue << endl;
	}
	inputFile.close();
	system("pause");
	return 0;
}