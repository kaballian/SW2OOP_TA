#include "WebPageBuilder.h"

class ContactPageBuilder : public web_page_builder
{

private:
    std::string build_header() override;
    std::string build_body() override;
    std::string build_footer() override;


public:

    ~ContactPageBuilder() override = default;
    ContactPageBuilder() = default;
    ContactPageBuilder(const ContactPageBuilder&) = default;
    ContactPageBuilder& operator=(const ContactPageBuilder&)=default; 

    // std::string build_page();

};