#pragma once
#include "base.h"
#include <vector>

class Present
{
private:
    std::vector<std::shared_ptr<BaseSweet>> present;
    
public:
    Present() = default;
    ~Present() = default;
};


