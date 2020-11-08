
using namespace std;

class Array {
public:
	Array(const Array& array) {
		count_ = array.count_;
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++) {
			ary_[i] = array.ary_[i];
		}
	}
	Array(int count = 0) :count_(count) {
		ary_ = new int[count_];
		for (int i = 0; i < count_; i++) {
			ary_[i] = rand() % 10;
		}
	};
	~Array() {
		delete[] ary_;
	}
	Array& Set(int index, int value) {
		ary_[index] = value;
		return *this;
	}
	void Print();

	friend ostream& operator<<(ostream& out, const Array& array);

private:
	int* ary_;
	int count_;
};

ostream& operator<<(ostream& out, const Array& array) {
	for (int i = 0; i < array.count_; i++) {
		cout << array.ary_[i] << "\t";
	}
	cout << endl;
}