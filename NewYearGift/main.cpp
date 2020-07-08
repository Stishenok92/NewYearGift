#include "headers.h"

int main()
{
    std::ifstream file("Text.txt");
    
    if (!file)
    {
        std::cout << "Error file!\n";
    }
    
    Sweet sweets;
    sweets.read(file);
    sweets.print(std::cout);
    
    
    system("pause");
    return 0;
}
