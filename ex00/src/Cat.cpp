/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:59:19 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:26:50 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "[Cat] default ctor" << std::endl;
	type = "Cat";	
}

Cat::~Cat()
{
	std::cout << "[Cat] dtor" << std::endl;
}

Cat::Cat(Cat &other)
{
	type = other.getType();
}
Cat& Cat::operator=(Cat &other)
{
	if (this != &other)
		type = other.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}