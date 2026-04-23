#pragma once
#include "resource.h"

class parent : public resource
{

private:
    int size_of_resources;
    resource** random_resources;


public:
    parent();
    parent(const int number_of_resources);
    parent(const parent& other);

    parent& operator=(const parent& other);

    ~parent();
};