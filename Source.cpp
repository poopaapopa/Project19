#include <iostream>
using namespace std;

class Number
{
public:
	float x;
	float y;
	float z;
	void setValues(float num1, float num2, float num3)
	{
		x = num1;
		y = num2;
		z = num3;
	}
	void print()
	{
		cout << "Coordinate x: " << x << "\nCoordinate y: " << y << "\nCoordinate z: " << z << "\n\n";
	}
	bool isEqual(Number point)
	{
		if (point.x == x and point.y == y and point.z == z)
			return 1;
		else
			return 0;
	}
	bool isMore(Number point)
	{
		if (point.x < x and point.y < y and point.z < z)
			return 1;
		else
			return 0;
	}
	bool isSmaller(Number point)
	{
		if (point.x > x and point.y > y and point.z > z)
			return 1;
		else
			return 0;
	}
	bool isMoreorEqual(Number point)
	{
		if (point.x <= x and point.y <= y and point.z <= z)
			return 1;
		else
			return 0;
	}
	bool isSmallerorEqual(Number point)
	{
		if (point.x >= x and point.y >= y and point.z >= z)
			return 1;
		else
			return 0;
	}
};

int main()
{
	Number point;
	point.setValues(3.0, 4.0, 5.0);
	point.print();
	Number point1;
	point1.setValues(3.0, 4.0, 5.0);
	if (point.isEqual(point1))
		cout << "point and point1 are equal\n";
	else
		cout << "point and point1 are not equal\n";
	Number point2;
	point2.setValues(7.0, 8.0, 9.0);
	if (point.isEqual(point2))
		cout << "point and point2 are equal\n";
	else
		cout << "point and point2 are not equal\n";
	if (point.isMore(point2))
		cout << "point are more, then point2\n";
	else
		cout << "point are not more, then point2\n";
	if (point.isSmaller(point2))
		cout << "point are smaller, then point2\n";
	else
		cout << "point are not smaller, then point2\n";
	if(point.isMoreorEqual(point2))
		cout << "point are more or equal, then point2\n";
	else
		cout << "point are not more or equal, then point2\n";
	if (point.isSmallerorEqual(point2))
		cout << "point are smaller or equal, then point2\n";
	else
		cout << "point are not smaller or equal, then point2\n";
	return 0;
}