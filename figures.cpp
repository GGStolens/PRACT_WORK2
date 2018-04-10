#include <iostream>
#include <utility>
#include <cmath>
#include <string>
#include "figures.h"

int check_inside(Circle & c, Triangle & p) {
	int touch = 0;
	for (int i = 0; i < 3; ++i) {
		double length = std::sqrt((p.vertex[i].first - c.center.first) * (p.vertex[i].first - c.center.first)
						+ (p.vertex[i].second - c.center.second) * (p.vertex[i].second - c.center.second));
		if (length > c.radius)
			return 1;
		else if (length == c.radius)
			++touch;
	}
	if (touch == 3)
		return 0;
	else
		return -1;
}

int check_inside(Circle & c, Rectangle & p) {
	int touch = 0;
	for (int i = 0; i < 4; ++i) {
		double length = std::sqrt((p.vertex[i].first - c.center.first) * (p.vertex[i].first - c.center.first)
						+ (p.vertex[i].second - c.center.second) * (p.vertex[i].second - c.center.second));
		if (length > c.radius)
			return 1;
		else if (length == c.radius)
			++touch;
	}
	if (touch == 4)
		return 0;
	else
		return -1;
}