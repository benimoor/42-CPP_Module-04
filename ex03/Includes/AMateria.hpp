/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:41:52 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 23:18:40 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter ;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria &other);
	AMateria& operator=(AMateria &other);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif