// Product.cpp

#include "Product.h"
#include <iostream>

Product::Product(int id, const std::string &productName, double productPrice)
    : productId(id), name(productName), price(productPrice) {}

void Product::display() const {
    std::cout << "Product ID: " << productId << ", Name: " << name << ", Price: $" << price << std::endl;
}
