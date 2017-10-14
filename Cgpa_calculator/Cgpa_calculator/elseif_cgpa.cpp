#include<iostream>
#include<math.h>
using namespace std;
int main()
{

	float marks = 0;
	float grade;
	int i = 1;

	cout << "\nSubject " << i++; "\nEnter Marks:"; cin >> marks;

	if (marks >= 87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;


	grade = 0;

	cout << "\nSubject " << i++; "\nEnter Marks:"; cin >> marks; cout << "Enter Credit Hours :";

	if (marks>87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;
	grade = 0;
	cout << "\nSubject " << i++; "\nEnter Marks:"; cin >> marks;

	if (marks>87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;

	grade = 0; cout << "\nSubject " << i++; "\nEnter Marks:"; cin >> marks; cout << "Enter Credit Hours :";

	if (marks>87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;


	grade = 0;
	cout << "\nSubject " << i++; "\nEnter Marks:"; cin >> marks; cout << "Enter Credit Hours :";
	if (marks>87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;
	grade = 0;
	cout << "\n\nSubject " << i++; "\nEnter Marks:"; cin >> marks; cout << "Enter Credit Hours :";
	if (marks>87)
	{
		cout << "A\n";
		grade = 4.00;
	}
	else if (marks>79 && marks<87)
	{
		cout << "B+\n";
		grade = 3.5;
	}
	else if (marks>71 && marks<80)
	{
		cout << "B\n";
		grade = 3.00;
	}
	else if (marks>65 && marks<72)
	{
		cout << "C+\n";
		grade = 2.5;
	}
	else if (marks>59 && marks<66)
	{
		cout << "C\n";
		grade = 2.00;
	}
	else if (marks<60)
	{
		cout << "F\n";
		grade = 0.00;
	}
	else if (marks>100) {
		cout << "ERROR!\n";
	}
	cout << "\nGRADE= " << grade;

	grade = 0;

	cout << "\nGPA=" << grade * 100 / 500;
}