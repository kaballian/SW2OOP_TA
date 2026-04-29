#include "ContactPageBuilder.h"

#include <string>

std::string ContactPageBuilder::build_header() {
	std::string s;

	s.append("My lovely contact Header");

	return s;
}

std::string ContactPageBuilder::build_body() {
	std::string s;
	s.append("<div id=\"BodyDiv\">");
	s.append("All ABOUT MY contact stuff :-)");
	s.append("</div>");
	return s;
}

std::string ContactPageBuilder::build_footer() {
	std::string s;

	s.append("My lovely contact footer ");

	return s;
}
