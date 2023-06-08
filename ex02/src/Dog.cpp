/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:03:55 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:19:23 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";	
	qyala = new Brain();
	std::cout << "[Dog] default ctor" << std::endl;
}

Dog::~Dog()
{
	delete qyala;
	std::cout << "[Dog] dtor" << std::endl;
}

Dog::Dog(Dog &other)
{
	type = other.getType();
	qyala = new Brain(*other.qyala);
}
Dog& Dog::operator=(Dog &other)
{
	if (this != &other)
	{
		delete qyala;
		qyala = new Brain(*other.qyala);
		type = other.getType();
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}