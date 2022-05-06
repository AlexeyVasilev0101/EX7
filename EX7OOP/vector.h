#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

using namespace std;

class Vector {
private:
	double x1;
	double y1;
	double x2;
	double y2;
	double x;
	double y;
public:
	Vector();
	~Vector();
	void setVector(double, double, double, double);
	double mod();
	void getStartPoint();
	void getEndPoint();
	void getVector();
	void add(Vector);
	void deduct(Vector);
	void multKoef(double);
};

#endif