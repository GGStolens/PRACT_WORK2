#include <iostream>
#include <utility>
#include <vector>
#include "figures.h"

int main() {
	std::pair<double, double> center;
	std::vector<std::pair<double, double>> vertex;
	double radius;
	int num_vertex;
	std::cout << "Enter the coordinates of the center of the circle:" << std::endl;
	std::cin >> center.first >> center.second;
	std::cout << "Enter the radius of the circle:" << std::endl;
	std::cin >> radius;
	std::cout << "Enter the number of vertices of the figures:" << std::endl;
	std::cin >> num_vertex;
	std::cout << "Enter the coordinates of the vertices:" << std::endl;
	for (int i = 0; i < num_vertex; ++i) {
		int a, b;
		std::cin >> a >> b;
		vertex.push_back(std::make_pair(a, b));
	}
	Circle circle(center, radius);
	Polygon polygon(vertex, num_vertex);
	if (polygon.check_inside(circle) == 1)
		std::cout << "OUTSIDE" << std::endl;
	else if (polygon.check_inside(circle) == -1)
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "TOUCH" << std::endl;
	return 0;
}