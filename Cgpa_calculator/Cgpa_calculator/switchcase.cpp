#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float grade, temp = 0, temp1 = 0, temp2 = 0, marks = 0;
	int i = 1, CH = 0;
	cout << "\nenter marks subject" << i++ << "number="; cin >> marks; cout << "enter credit hours"; cin >> CH;
	temp2 = CH + temp2;
	switch (marks)
	{
		case(marks >= 87)


			cout << "\nA";
			grade = 4.00;
			break;

			case(marks>79 && marks<87)

				cout << "\nB+";
				grade = 3.50;
				break;

				case(marks >= 71 && marks<80)

					cout << "\nB";
					grade = 3.00;
					break;

					case(marks<72 && marks>66)

						cout << "\nC+";
						grade = 2.50;
						break;
						case(marks<67 && marks>60)

							cout << "\nC";
							grade = 2.00;
							break;

							case(marks<60)

								cout << "\nF";
								grade = 0.00;
								break;
	}

	default(marks>100)
		cout << "\ninvalid marks";
	cout << "\nGrade=" << grade;
	temp1 = CH*grade;
	temp = temp + temp1;
}