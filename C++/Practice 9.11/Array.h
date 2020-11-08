using namespace std;

class Array {
public:
	Array(int count = 0) :count_(count) {
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++) {
			ary_[i] = rand() % 10;
		}
	};
	~Array() {
		delete[] ary_;
	}

	friend ostream& operator<<(ostream& out, const Array& array);
	Array& operator=(const Array& array) {
		delete[] ary_;

		count_ = array.count_;
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++) {
			ary_[i] = array.ary_[i];
		}

		return (*this);
	}

private:
	int* ary_;
	int count_;
};