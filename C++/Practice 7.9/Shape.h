#pragma once;

class Shape {
public:
	Shape(int type = 1, double len = 1) : type_(type), len_(len), PI(3.14) {
		switch (type)
		{
		case 1:
			rec_count_++;
			break;
		default:
			cir_count_++;
			break;
		}
	};
	~Shape() {
		switch (this->type_)
		{
		case 1:
			rec_count_--;
			break;
		default:
			cir_count_--;
			break;
		}
	}
	double GetArea();
	static int GetRectCount();
	static int GetCircleCount();

private:
	int type_;
	double len_;
	const double PI;
	static int rec_count_;
	static int cir_count_;
};

inline int Shape::GetRectCount() { return rec_count_; };
inline int Shape::GetCircleCount() { return cir_count_; };