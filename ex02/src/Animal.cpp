/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:49:02 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:24:49 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "[Animal] default ctor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "[Animal] dtor" << std::endl;
}

std::string	Animal::getType() const {return type;}

Animal::Animal(Animal &other)
{
	type = other.getType();
}

Animal& Animal::operator=(Animal &other)
{
	if (this != &other)
	{
		type = other.getType();
	}
	return *this;
}

void Animal::makeSound() const {};