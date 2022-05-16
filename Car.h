#pragma once
#include "Header.h"

class Car {
private:
	static int countCars;
	string brand;
	string model;
	int age;
	double price;
	int uniqueId;

public:
	int randomId();
	int getCountCars();
	Car();
	Car(string brand, string model);
	Car(string brand, string model, int age, double price, int uniqueId);
	~Car();

	string getBrand();
	void setBrand(string brand);

	string getModel();
	void setModel(string model);

	int getAge();
	void setAge(int age);

	double getPrice();
	void setPrice(double price);

	int getId();

	void AboutCar(Car car);

	string getInfo();
};
