#ifndef FIGURES_H_
#define FIGURES_H_

#include <utility>
#include <vector>
#include <iostream>
#include <string>

struct Circle {
	std::pair<double, double> center;
	double radius;
};

struct Triangle {
	std::vector<std::pair<double, double>> vertex;

};

struct Rectangle {
	std::vector<std::pair<double, double>> vertex;
};

int check_inside(Circle &, Triangle &);
int check_inside(Circle &, Rectangle &);

#endif