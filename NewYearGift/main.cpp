#include "base.h"
#include "chocolate.h"
#include "marshmallow.h"
#include "lollypop.h"
#include "present.h"

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
    }
    
    return nullptr;
    
    
}

int main()
{
 
//    std::vector<std::shared_ptr<BaseSweet>> sweets;
    
    system("pause");
    return 0;
}
