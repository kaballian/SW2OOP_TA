#pragma once
#include <string>

class web_page_builder
{
public:
	virtual ~web_page_builder() = default;
	web_page_builder() = default;
	web_page_builder(const web_page_builder&) = default;
	web_page_builder& operator=(const web_page_builder&) = default;

	std::string build_page(); // the template function 

private:
	virtual std::string build_header() = 0;//These are to be overridden in children
	virtual std::string build_body() = 0;
	virtual std::string build_footer() = 0;

	static std::string start_html();
	static std::string end_html();
	static std::string start_body();
	static std::string end_body();
	static std::string start_header();
	static std::string end_header();
	static std::string start_footer();
	static std::string end_footer();
	static std::string build_head();


};

