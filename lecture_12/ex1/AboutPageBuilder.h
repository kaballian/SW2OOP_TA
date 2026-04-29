#include "WebPageBuilder.h"

class AboutPageBuilder : public web_page_builder
{

private:
    std::string build_header() override;
    std::string build_body() override;
    std::string build_footer() override;

public:
    ~AboutPageBuilder() override = default;
    AboutPageBuilder() = default;
    AboutPageBuilder(const AboutPageBuilder&) = default;
    AboutPageBuilder& operator=(const AboutPageBuilder&)=default; 

    // std::string build_page();

};