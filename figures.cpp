#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
#include "figures.h"

Circle::Circle() {
	center.first = center.second = radius = 0;
}

Circle::Circle(std::pair<double, double> & c, double r) {
	center.first = c.first;
	center.second = c.first;
	radius = r;
}

Polygon::Polygon() {
	num_vertex = 1;
	vertex[0].first = vertex[0].second = 0;
}

Polygon::Polygon(std::vector<std::pair<double, double>> & v, int nv) {
	num_vertex = nv;
	vertex = v;
}

Polygon::~Polygon() {}
Circle::~Circle() {}

int Polygon::check_inside(const Circle & c) {
	int touch = 0;
	for (int i = 0; i < num_vertex; ++i) {
		double length = sqrt((vertex[i].first - c.center.first) * (vertex[i].first - c.center.first) +
							(vertex[i].second - c.center.second) * (vertex[i].second - c.center.second));
		if (length > c.radius)
			return 1;
		else if (length == c.radius)
			++touch;
	}
	if (touch == num_vertex)
		return 0;
	else
		return -1;
}