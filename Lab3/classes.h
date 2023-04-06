#pragma once
#include <iostream>
using namespace std;

class Point {
private:
	float x;
	float y;
	float z;

	float v_x;
	float v_y;
	float v_z;

public:
	Point();

	float GetX() { return x; }
	float GetY() { return y; }
	float GetZ() { return z; }
	float GetV_X() { return v_x; }
	float GetV_Y() { return v_y; }
	float GetV_Z() { return v_z; }

	void SetValues();
	void PrintPoint();
};