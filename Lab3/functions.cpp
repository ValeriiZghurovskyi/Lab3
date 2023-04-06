#include "classes.h"

void add_point_to_array(Point point, Point*& array, int& size) {
	Point* new_array = new Point[size + 1];
	for (int i = 0; i < size; i++) {
		new_array[i] = array[i];
	}
	new_array[size] = point;
	size++;
	delete[] array;
	array = new_array;
}



void check_octant(Point* array, int size) {
	float t;

	cout << "\nEnter time: ";
	cin >> t;

	cout << "\nThere are points that located in the first octant at time t = " << t << ":" << endl;
	for (int i = 0; i < size; i++) {
		if (array[i].GetX() + t * array[i].GetV_X() > 0 &&
			array[i].GetY() + t * array[i].GetV_Y() > 0 &&
			array[i].GetZ() + t * array[i].GetV_Z() > 0) {
			cout << "-------------------------------" << endl;
			cout << "Point #" << i + 1 << ":" << endl;
			array[i].PrintPoint();
		}
	}
}