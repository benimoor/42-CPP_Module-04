/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:14:51 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 23:22:20 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(/* args */){_type = "cure";}

Cure::Cure(Cure &other) : AMateria(other) {_type = other._type;}

Cure& Cure::operator=(Cure &other)
{
	if (this != &other)
		_type = other._type;
	return *this;
}
Cure::~Cure(){};

AMateria* Cure::clone() const{return new Cure();}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}