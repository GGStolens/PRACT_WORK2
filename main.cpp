#include <iostream>
#include <utility>
#include <vector>
#include "figures.h"
#include <string>

int main() {
	double x, y, r;
	int check;
	std::string polygon;
	std::cout << "Enter the coordinates of circle" << std::endl;
	std::cin >> x >> y;
	std::cout << "Enter the length circle's radius" << std::endl;
	std::cin >> r;
	Circle _circle;
	_circle.center = std::make_pair(x, y);
	_circle.radius = r;
	std::cout << "Enter the polygon: triangle or rectangle" << std::endl;
	std::cin >> polygon;
	if (polygon == "triangle") {
		Triangle p;
		std::cout << "Enter the coordinates of triangle" << std::endl;
		for (int i = 0; i < 3; ++i) {
			std::cin >> x >> y;
			p.vertex.push_back(std::make_pair(x, y));
			check = check_inside(_circle, p);
		}
	}
	else if (polygon == "rectangle") {
		Rectangle p;
		std::cout << "Enter the coordinates of rectangle" << std::endl;
		for (int i = 0; i < 4; ++i) {
			std::cin >> x >> y;
			p.vertex.push_back(std::make_pair(x, y));
		}
		check = check_inside(_circle, p);
	}
	else {
		std::cout << "Incorrect name of polygon!" << std::endl;
		exit(0);
	}
	if (check == 1)
		std::cout << "OUTSIDE" << std::endl;
	else if (check == -1)
		std::cout << "INSIDE" << std::endl;
	else
		std::cout << "TOUCH" << std::endl;
	return 0;
}