#include "classes.h"


Point::Point() {
	x = 0; y = 0; z = 0;
	v_x = 0; v_y = 0; v_z = 0;
}



void Point::SetValues() {
	cout << "Enter coordinates: " << endl;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	cout << "Z: ";
	cin >> z;

	cout << "Enter spped vector in format (vx, vy, vz): ";
	cin.ignore();
	scanf_s("(%f, %f, %f)", &v_x, &v_y, &v_z);
}



void Point::PrintPoint() {
	cout << "Coordinates: " << endl;
	cout << "X = " << x << "; ";
	cout << "Y = " << y << "; ";
	cout << "Z = " << z << endl;

	cout << "Speed vector: (" << v_x << ", " << v_y << ", " << v_z << ")" << endl;
}