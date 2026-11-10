#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
	string student[5];
	int row = 5;
	int cols = 5;
	double grade;
	double totalgrade = 0;
	vector<double> temp;
	vector<vector<double>> gradebook;

	for (int r = 0; r < row; r++)
	{
		cout << "Enter Student Name ==> ";
		getline(cin, student[r]);
		double totalgrade = 0;

		for (int c = 0; c < cols; c++)
		{
			cout << "Enter Grade " << c + 1 << " ==> ";
			cin >> grade;

			totalgrade += grade;
			temp.push_back(grade);
			

		}
		cin.ignore();
		cout << endl;
		temp.push_back(totalgrade / 5);
		gradebook.push_back(temp);
		temp.clear();
	}
	cout << endl;

	cout << "\t\t";

	for (int t = 0; t < 5; t++)
	{

		cout << setw(5) << " Grade " << (t + 1) << " ";

	}

	cout << setw(8) << "Average" << endl;

	for (int r = 0; r < gradebook.size(); r++)
	{
		cout << left << setw(10) << student[r] << "\t ";

		for (int c = 0; c < gradebook[r].size(); c++)
		{
			cout << fixed << setprecision(2) << setw(9) << gradebook[r][c];
		}
		cout << endl;
	}
}