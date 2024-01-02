#include <iostream>
using namespace std;

class Square;

class Rectangle {
	int width, height;
	public:
		Rectangle(int w, int h){ 
			width=w; height=h; 
		}

void display() {
	cout << "Rectangle: " << width * height << endl;
};

void morph(Square &);
};

class Square {
		int side;
	public:
		Square(int s){
			side=s;
		}
	void display() {
	cout << "Square: " << side * side << endl;
};
	friend class Rectangle;
};

	void Rectangle::morph(Square &s) {
	width = s.side;
	height = s.side;
	}

int main () {
	Rectangle rec(5,10);
	Square sq(5);
	cout << "Before:" << endl;
	rec.display();
	sq.display();
	rec.morph(sq);
	cout << "\nAfter:" << endl;
	rec.display();
	sq.display();
	
return 0; 
}
