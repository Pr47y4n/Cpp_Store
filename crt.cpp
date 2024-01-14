#include "crt.h"

#include <iostream>

void Cart::add_product(Product* product)
{
	m_products.push_back(product);	
}

void Cart::display() const 
{
	for(int i = 0; i < m_products.size(); ++i)
	{
		m_products[i]->display();
	}
}

double Cart::calculate_total()
{
	double sum = 0;
	for(int i = 0; i < m_products.size(); ++i)
	{
		sum += m_products[i]->get_price();
	}
	return sum;
}
