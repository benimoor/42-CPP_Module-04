/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:29:52 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:33:32 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "[WrongAnimal] default ctor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] dtor" << std::endl;
}

std::string	WrongAnimal::getType() const {return type;}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
	type = other.getType();
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
	if (this != &other)
		type = other.getType();
	return *this;
}

void WrongAnimal::makeSound() const {};