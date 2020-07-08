#pragma once
#include "headers.h"

class Present
{
private:
    std::vector<std::shared_ptr<BaseSweet>> present;
    double weight;
    double cost;
    
public:
    Present() = default;
    ~Present() = default;
};


