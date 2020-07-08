#pragma once
#include "headers.h"

class BaseSweet
{
private:
    std::string name;
    double weight;
    double price;
    double sugar;
public:
    BaseSweet() = default;
    virtual ~BaseSweet() = default; //для правильного удаления объектов
    
    std::string getName() const { return name; }
    double getWeight() const { return weight; }
    double getPrice() const { return price; }
    double getSugar() const { return sugar; }
    
    void setName(std::string _name) { name = _name; }
    void setWeight(double _weight) { weight = _weight; }
    void setPrice(double _price) { price = _price; }
    void setSugar(double _sugar) { sugar = _sugar; }
    
    virtual std::istream& read(std::istream& in)
    {
        in >> name >> weight >> price >> sugar;
        return in;
    }
    
    virtual std::ostream& print(std::ostream& out) const
    {
        out << "name " << name << " weight " << weight << " price " << price << " sugar " << sugar;
        return out;
    }
};

std::ostream& operator<<(std::ostream& out, std::shared_ptr<BaseSweet> ptr)
{
    ptr->print(out);
    return out;
}
