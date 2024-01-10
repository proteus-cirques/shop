// Product.h

#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int productId;
    std::string name;
    double price;

public:
    Product(int id, const std::string &productName, double productPrice);
    void display() const;
};

#endif // PRODUCT_H
