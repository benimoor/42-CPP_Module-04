/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:34:07 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:34:36 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "[WrongCat] default ctor" << std::endl;
	type = "WrongCat";	
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] dtor" << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
{
	type = other.getType();
}
WrongCat& WrongCat::operator=(WrongCat &other)
{
	if (this != &other)
		type = other.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "[Wrong] meow" << std::endl;
}