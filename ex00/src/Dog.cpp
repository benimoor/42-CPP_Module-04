/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:03:55 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:27:09 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "[Dog] default ctor" << std::endl;
	type = "Dog";	
}

Dog::~Dog()
{
	std::cout << "[Dog] dtor" << std::endl;
}

Dog::Dog(Dog &other)
{
	type = other.getType();
}
Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
		type = other.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}