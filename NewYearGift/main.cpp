#include "base.h"
#include "chocolate.h"
#include "marshmallow.h"
#include "lollypop.h"
#include "present.h"
#include <fstream>
#include <sstream>
#include <iterator>


std::shared_ptr<BaseSweet> getPtr(char choise)
{
    switch (choise)
    {
        case 'c':
            return std::make_shared<Chocolate>();
            break;
        case 'm':
            return std::make_shared<Marshmallow>();
            break;
        case 'l':
            return std::make_shared<Lollypop>();
            break;
        default:
            return nullptr;
    }
}

int main()
{
 
    std::vector<std::shared_ptr<BaseSweet>> sweets;
    std::ifstream file("Text.txt");
    
    while (!file.eof())
    {
        char symbol;
        file >> symbol;
        sweets.push_back(getPtr(symbol));
        std::string str;
        getline(file, str);
        std::istringstream ss(str);
        sweets.back()->read(ss);
    }
    
    std::sort(sweets.begin(), sweets.end(), [] (std::shared_ptr<BaseSweet> a, std::shared_ptr<BaseSweet> b) { return a->getWeight() < b->getWeight(); });
    std::copy(sweets.begin(), sweets.end(), std::ostream_iterator<std::shared_ptr<BaseSweet>>(std::cout, "\n"));
    
    system("pause");
    return 0;
}
