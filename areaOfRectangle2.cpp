#include <iostream>
#include <string>
using namespace std;
class rectangle {
private: 
	float length, breadth, area, perimeter;
public:
	void getDimensions() {
	cout << "Enter length of Rectangle: ";
	cin >> length;
	cout << "Enter breadth of Rectangle: ";
	cin >> breadth;
}
	void calcArea() {
	area = length*breadth;
}
void calcPerimeter() {
	perimeter = 2*(length+breadth);
}
void display() {
cout << "Length is: " << length << endl;
cout << "Breadth is: " << breadth << endl;
cout << "Area is: " << area << endl;
cout << "Perimeter is: " << perimeter << endl;
}
};

int main() {
rectangle r1;
r1.getDimensions();
r1.calcArea();
r1.calcPerimeter();
r1.display();

return 0;
}
