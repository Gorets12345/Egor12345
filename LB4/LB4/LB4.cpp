#include <iostream>

using namespace std;

	 struct Car
	{
		int X;
		int Y;
		int MaxSpeed;
		float Price;
	};

	struct Car1
	{
		int X;
		int Y;
		int MaxSpeed;
		float Price;
	};

	struct Car2
	{
		int X;
		int Y;
		int MaxSpeed;
		float Price;
	};

	int main()
	{
		cout << "Car : \t";
		 
		int cX = 10;
		int cY = 10;
		int cMaxSpeed = 220;
		int cPrice = 10000;

		cout << cX << ", \t";
		cout << cY <<  ", \t";
		cout << cMaxSpeed << "km/h" << ", \t";
		cout << cPrice  << "$" << "\t \n";


		cout << "Car1 : \t ";

		int c1X = 10;
		int c1Y = 10;
		int c1MaxSpeed = 250;
		int c1Price = 15000;

		cout << c1X << ", \t";
		cout << c1Y << ", \t";
		cout << c1MaxSpeed  << "km/h" << ", \t";
		cout << c1Price << "$" << "\t \n";


		cout << "Car2 : \t ";

		int c2X = 10;
		int c2Y = 10;
		int c2MaxSpeed = 300;
		int c2Price = 25000;

		cout << c2X << ", \t";
		cout << c2Y << ", \t";
		cout << c2MaxSpeed << "km/h" << ", \t";
		cout << c2Price << "$" << "\t";

	}




	
	