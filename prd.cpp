#include "prd.h"

#include <iostream>

void Product::display()
{
	std::cout << m_name << ' ' << m_price << std::endl;	
} 

double Product::calculate_discount()
{
	return 0.0;
}

void Product::set_name(const std::string& name)
{
	m_name = name;
}

void Product::set_price(double new_price)
{
	m_price = new_price;
}

std::string Product::get_name() const
{
	return m_name;
}

double Product::get_price() const
{
	return m_price;	
}
