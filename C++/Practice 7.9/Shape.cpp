#include "Shape.h"

int Shape::rec_count_ = 0;
int Shape::cir_count_ = 0;

double Shape::GetArea() {
	switch (type_)
	{
	case 1:
		return len_ * len_;
	default:
		return PI * len_ * len_;
	}
}