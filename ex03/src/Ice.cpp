/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:14:51 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 23:22:20 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(/* args */):AMateria(){_type = "ice";}

Ice::Ice(Ice &other) : AMateria(other) {_type = other._type;}

Ice& Ice::operator=(Ice &other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}
Ice::~Ice(){};

AMateria* Ice::clone() const{return new Ice();}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}