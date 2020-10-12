#include<iostream>
using namespace std;

class Controller;

class Car {
public:
	Car(int price) : on_off_(false), price_(price), speed_(0) {}
	void PrintSpeed() { cout << "현재 속도 : " << speed_ << endl; }
	void SetPrice(Controller& controller, int price);

	friend class Controller;

private:
	bool on_off_;
	int price_;
	int speed_;
};

class Controller {
public:
	Controller(int price) :price_(price) {}
	void TurnOn(Car& car) { car.on_off_ = true; }
	void TurnOff(Car& car) { car.on_off_ = false; }
	void SpeedChange(Car& car, int v) { car.speed_ += v; }

	friend void Car::SetPrice(Controller& controller, int price);

private:
	int price_;
};

void Car::SetPrice(Controller& controller, int price) {
	controller.price_ = price;
}

int main() {
	Car my_car(100);
	Controller my_controller(10);

	my_controller.TurnOn(my_car);
	my_controller.SpeedChange(my_car, 5);
	my_car.PrintSpeed();
	my_controller.TurnOff(my_car);
	my_car.SetPrice(my_controller, 100);

	return 0;
}