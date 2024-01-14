#include "dprd.h"

#include <iostream>

void DiscountedProduct::display()
{
	std::cout << this->get_name() << ' ' << this->get_price() << ' ' << m_discount_precentage << std::endl;
}
double DiscountedProduct::calculate_discount()
{
	double prc = this->get_price();
	m_price	-= (m_discount_precentage / 100) * prc;
	return this->get_price();
}
