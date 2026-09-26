#include <iostream>
#include <string>
using namespace  std;

class rectangle {
private:
	float  length, breadth, area, perimeter;
public:
	void getDimensions();
	void calcArea();
	void calcPerimeter();
	void display();
};

void rectangle::getDimensions() {
	cout << "Enter length of the rectangle: ";
	cin >> length;
	cout << "Enter breadth of the rectangle: ";
	cin >> breadth;
}
void rectangle::calcArea() {
	area = length * breadth;
}
void rectangle::calcPerimeter() {
	perimeter = 2*(length + breadth);
}
void rectangle::display() {
	cout << "Length is: " << length <<endl;
	cout << "Breadth is: " << breadth <<endl;
	cout << "Area is: " << area <<endl;
	cout << "Perimeter is: "<< perimeter <<endl;
}

int main() {
rectangle r1;
r1.getDimensions();
r1.calcArea();
r1.calcPerimeter();
r1.display();

return 0;
}
