#ifndef FIGURES_H_
#define FIGURES_H_

#include <utility>
#include <vector>
#include <iostream>

class Circle {
public:
	std::pair<double, double> center;
	double radius;
	Circle();
	Circle(std::pair<double, double> & c, double r);
	~Circle();
};

class Polygon {
private:
	std::vector<std::pair<double, double>> vertex;
	int num_vertex;
public:
	Polygon();
	Polygon(std::vector<std::pair<double, double>> & v, int nv);
	~Polygon();
	int check_inside(const Circle & c);
};

#endif