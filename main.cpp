// main.cpp

#include "Product.h"
#include "Customer.h"
#include "ECommerceSystem.h"

int main() {
    // Create products
    Product laptop(1, "Laptop", 800.0);
    Product smartphone(2, "Smartphone", 400.0);

    // Create customers
    Customer customer1("Alice");
    Customer customer2("Bob");

    // Create an e-commerce system
    ECommerceSystem ecommerceSystem;

    // Add products to the system
    ecommerceSystem.addProduct(laptop);
    ecommerceSystem.addProduct(smartphone);

    // Add customers to the system
    ecommerceSystem.addCustomer(customer1);
    ecommerceSystem.addCustomer(customer2);

    // Customers make purchases
    customer1.purchaseProduct(laptop);
    customer2.purchaseProduct(smartphone);
    customer2.purchaseProduct(laptop);

    // Display available products and customer purchases
    ecommerceSystem.displayAvailableProducts();
    ecommerceSystem.displayCustomerPurchases();

    return 0;
}
