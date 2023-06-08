/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:51:26 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/09 00:56:42 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::~AMateria(){};

AMateria::AMateria(){};

AMateria::AMateria(std::string const & type){_type = type;}

AMateria::AMateria(AMateria &other){_type = other._type;}

AMateria& AMateria::operator=(AMateria &other)
{
	if(this != &other)
		_type = other._type;
	return *this;
}

std::string const &AMateria::getType()const{return _type;}

void	AMateria::use(ICharacter& target){(void)(target);}