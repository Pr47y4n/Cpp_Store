#include "cstmr.h"

#include <iostream>

void Costumer::add_to_cart(Product* prod)
{
	m_cart.add_product(prod);
}

void Costumer::view_cart()
{
	m_cart.display();
	m_cart.calculate_total();	
}
