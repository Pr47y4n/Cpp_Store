# Store Management System C++ Project

This C++ project provides a versatile and efficient Store Management System designed to simplify inventory tracking, sales management, and customer interactions. The system is built with modularity and extensibility in mind, allowing easy integration into various retail environments.

# Project Structure

The project includes the following header files and their corresponding implementation files:

* **crt.h** and **crt.cpp**: Contains the definition and implementation of the Cart class for managing shopping carts during the Point of Sale process.

* **cstmr.h** and **cstmr.cpp**: Defines the Customer class for storing and managing customer information.

* **dprd.h** and **dprd.cpp**: Implements the DiscountedProduct class for representing discounted products in the inventory.

* **prd.h** and **prd.cpp**: Contains the Product class definition and implementation for managing individual products in the inventory.

# Installation
Clone the repository to your local machine and copy the relevant source files to your project directory.

# Usage

Create an instance of the **Customer** class and test its functionalities in main.cpp. Implement the Cart management operations based on the requirements of your retail environment.
    
    #include <iostream>
    #include "crt.h"
    #include "cstmr.h"
    #include "dprd.h"
    #include "prd.h"

    int main() {
    // Create a Product instance
    Producd myProduct;

    // Perform inventory management operations using Cart, Customer, Discounted Product, and Product classes
    // ...

    return 0;
}

# Contributing

Contributions are welcome! If you have ideas for additional features, improvements, or bug fixes, please open an issue or submit a pull request.
