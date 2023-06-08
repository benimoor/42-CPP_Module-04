/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:59:19 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:19:05 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";	
	qyala = new Brain();
	std::cout << "[Cat] default ctor" << std::endl;
}

Cat::~Cat()
{
	delete qyala;
	std::cout << "[Cat] dtor" << std::endl;
}

Cat::Cat(Cat &other)
{
	type = other.getType();
	qyala = new Brain(*other.qyala);
}
Cat& Cat::operator=(Cat &other)
{
	if (this != &other)
	{
		delete qyala;
		qyala = new Brain(*other.qyala);
		type = other.getType();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}