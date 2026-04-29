#include <Windows.h>
#include "WebPageBuilder.h"
#include <fstream>
#include <iostream>

#include "AboutPageBuilder.h"
#include "ContactPageBuilder.h"

int main()
{
	


	// web_page_builder* w_about = new about_page_builder;
	web_page_builder* w_about = new AboutPageBuilder;
	// web_page_builder* w_contact = new contact_page_builder;
	web_page_builder* w_contact = new ContactPageBuilder;


	// URL or file path to open
	std::ofstream htmlFile("temp.html");
	htmlFile << w_contact->build_page();
	htmlFile.close();
	// Open the default program associated with the URL or file
	ShellExecuteA(nullptr, "open", "temp.html", nullptr, nullptr, SW_SHOWNORMAL);
	delete w_about;
	delete w_contact;
	return 0;
}
