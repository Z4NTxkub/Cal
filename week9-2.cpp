#include <iostream>
using namespace std;
void CalCircle();
void CalRectangle();
int main()
{
	char Ch;
	do{
		cout << "Program Calculate of Circle." << endl;
		cout << "****************************" << endl;
		cout << "1. Circle"<<endl;
		cout << "2. Rectangle"<<endl;
		cout << "3. Exit"<<endl;
		cout << "Choose Menu : ";
		cin >> Ch;
		if(Ch == '1')CalCircle();
			else if(Ch == '2')CalRectangle();
				else if(Ch == '3')cout << "Exit"<<endl;
					else cout<<"Wrong Menu"<<endl;
	}while(Ch != '3');
	system("pause");
	return(0);
}
void CalCircle()
{	float Radius, Area, Circumference;
	cout << "Input radius : ";
	cin >> Radius;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;;
	cout << endl;
	cout << "Area of circle : " << Area << endl;
	cout << "Circumference of circle : " << Circumference << endl;
	cout << "Diameter of circle : " << (2*Radius) << endl;
}
void CalRectangle()
{	float Widgth, Length, Area ;
	cout << "Input Widgth : ";
	cin >> Widgth;
	cout << "Input Length : ";
	cin >> Length;
	Area = Widgth*Length;
	cout << endl;
	cout << "Area of Rectangle : " << Area << endl;
}