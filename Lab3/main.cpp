#include "classes.h"
#include "functions.h"

int main() {
	Point point;
	int array_size = 1;
	point.SetValues();

	Point* points = new Point[array_size];
	points[0] = point;

	char ch;
	cout << "Do you want to add point? (Y/N): ";
	cin >> ch;
	while (ch == 'y' || ch == 'Y') {
		point.SetValues();
		add_point_to_array(point, points, array_size);
		cout << "Do you want to add point? (Y/N): ";
		cin >> ch;
	}

	check_octant(points, array_size);

	delete[] points;
}