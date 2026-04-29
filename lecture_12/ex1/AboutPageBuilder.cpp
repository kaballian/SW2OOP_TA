#include "AboutPageBuilder.h"


#include <string>

std::string AboutPageBuilder::build_header() {
	std::string s;

	s.append("My lovely Header");

	return s;
}

std::string AboutPageBuilder::build_body() {
	std::string s;
	s.append("<div id=\"BodyDiv\">");
	s.append("All ABOUT ME :-)");
	s.append("</div>");
	return s;
}

std::string AboutPageBuilder::build_footer() {
	std::string s;

	s.append("My lovely footer ");

	return s;
}
