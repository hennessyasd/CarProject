#include "Car.h"

int main(void) {
	string brand, model;
	int age;
	double price;

	Car car1;
	Car car2;
	Car car3;

	car1.AboutCar(car1);
	car2.AboutCar(car2); 
	car3.AboutCar(car3);

	cout << "\nThere are cars on parking: " << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << car1.getInfo() << endl;
	cout << car2.getInfo() << endl;
	cout << car3.getInfo() << endl;
	cout << "Id " << car1.getModel() << "is: " << car1.getId() << endl;
	cout << "Id " << car2.getModel() << "is: " << car2.getId() << endl;
	cout << "Id " << car3.getModel() << "is: " << car3.getId() << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	return 0;
}
