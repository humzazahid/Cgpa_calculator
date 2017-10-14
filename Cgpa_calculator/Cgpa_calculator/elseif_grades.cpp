#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, d, e;
	double marks;
	cout << "enter first subject marks=";
	cin >> a;
	cout << "\nenter second subject marks=";
	cin >> b;
	cout << "\nenter third subject marks=";
	cin >> c;
	cout << "\nenter fourth subject marks=";
	cin >> d;
	cout << "\nenter fifth subject marks=";
	cin >> e;
	marks = (a + b + c + d + e) * 100 / 500;
	if (marks >= 87)
		cout << "Grade=A\n\nGpa=4.00";
	else if (marks>79 && marks<87)
		cout << "Grade=B+\n\n Gpa=3.50";
	else if (marks>71 && marks<80)
		cout << "Grade=B\n\nGpa=3.00";
	else if (marks>65 && marks<72)
		cout << "Grade=C+\n\nGpa=2.50";
	else if (marks>59 && marks<66)
		cout << "Grade=C\n\nGpa=2.00";
	else if (marks<60)
		cout << "Grade=F\n\nGpa=0.00";
	else if (marks>100)
		cout << "invalid marks";
	return 0;
}