#include "Car.h"


int Car::randomId() {
	srand(time(0));
	long long r = rand() % 10000000;
	return r;
};



int Car::countCars = 0;

int Car::getCountCars() {
	return countCars;
}

// default constructor - конструктор по умолчанию
Car::Car() {
	countCars++;
	brand = "no brand";
	model = "no model";
	age = 0;
	price = 0;
}

// constructor with params #1 - конструктор c параметрами
Car::Car(string brand, string model) {
	countCars++;
	this->brand = brand;
	this->model = model;
	age = 0;
	price = 0;
}

// constructor with params #2 - конструктор c параметрами
Car::Car(string brand, string model, int age, double price, int uniqueId) {
	this->brand = brand;
	this->model = model;
	this->age = age;
	this->price = price;
	this->uniqueId = randomId();
}

// destructor - деструктор
Car::~Car() {
	countCars--;
}

string Car::getBrand() {
	return brand;
}

void Car::setBrand(string brand) {
	this->brand = brand;
}

string Car::getModel() {
	return model;
}

void Car::setModel(string model) {
	this->model = model;
}

int Car::getAge() {
	return age;
}

void Car::setAge(int age) {
	this->age = age;
}

double Car::getPrice() {
	return price;
}

void Car::setPrice(double price) {
	this->price = price;
}

int Car::getId() {
	return uniqueId;
};

void Car::AboutCar(Car car) {
	// введите марку автопроизводителя
	cout << "Input brand of your car: ";
	cin >> brand;
	car.setBrand(brand);

	// введите модель вашего автомобиля
	cout << "Input model of your car: ";
	cin >> model;
	car.setModel(model);

	// введите возраст вашего автомобиля
	cout << "Input age of your car: ";
	cin >> age;
	car.setAge(age);

	// введите стоимость вашего автомобиля
	cout << "Input price of your car: ";
	cin >> price;
	car.setPrice(price);

	// информация о вашем автомобиле
	cout << "\nInfo about your car: " << endl;
	cout << car.getInfo() << endl;
};

string Car::getInfo() {
	return "Car: brand = " + brand
		+ "; model = " + model
		+ "; age = " + to_string(age)
		+ "; price = " + to_string(price)
		+ "; unique identifier: " + to_string(uniqueId)
		+ "\n";
}