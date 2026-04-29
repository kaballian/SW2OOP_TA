#include "WebPageBuilder.h"

std::string web_page_builder::build_page()
{
	std::string s;
	s.append(start_html());
	s.append(build_head());
	s.append(start_body());
	s.append(start_header());
	s.append(build_header()); // to be overridden 
	s.append(end_header());
	s.append(build_body()); // to be overridden 
	s.append(start_footer());
	s.append(build_footer()); // to be overridden 
	s.append(end_footer());
	s.append(end_body());
	s.append(end_html());
	return s;
}

// Prepared scaffolding helpers not to be overridden
std::string web_page_builder::start_html()
{
	return "<html>";
}

std::string web_page_builder::end_html()
{
	return "</html>";
}

std::string web_page_builder::start_body()
{
	return "<body>";
}

std::string web_page_builder::end_body()
{
	return "</body>";
}

std::string web_page_builder::start_header()
{
	return "<header>";
}

std::string web_page_builder::end_header()
{
	return "</header>";
}

std::string web_page_builder::start_footer()
{
	return "<footer>";
}

std::string web_page_builder::end_footer()
{
	return "</footer>";
}

std::string web_page_builder::build_head()
{
	std::string s;
	s.append("<head>");
	s.append("\n");
	s.append("<style>");
	s.append("\n");
	s.append("html {font-size: 16px;background-color: #f7a6a6;color: #5e2f2f;}");
	s.append("\n");
	s.append("body{margin: 0;padding: 20px; width:100%; height:100%}");
	s.append("footer{margin: 0; width:100%;height:10%}");
	s.append("header{margin: 0; width:100%;height:10%}");
	s.append("#BodyDiv{margin: 0; width:100%;height:80%}");
	s.append("\n");
	s.append("</style>");
	s.append("\n");
	s.append("</head>");
	return s;
}
