/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:43:26 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/09 00:23:55 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "NoName";
	index = 0;
	for(int i = 0; i < 4; i++)
		materia[i] = 0;
}

Character::Character(std::string name)
{
	_name = name;
	index = 0;
}

Character::Character(Character& other)
{
	_name = other._name;
	for(int i = 0; i <= index; i++)
		delete materia[i];
	for(int i = 0; i <= other.index; i++)
		materia[i] = other.materia[i]->clone();
}

Character& Character::operator=(Character& other)
{
	if(this != &other)
	{
		_name = other._name;
		for(int i = 0; i <= index; i++)
			delete materia[i];
		for(int i = 0; i <= other.index; i++)
			materia[i] = other.materia[i]->clone();
	}
	return *this;
}

Character::~Character()
{
	for(int i = 0; i <= index; i++)
			delete materia[i];
}

std::string const & Character::getName() const{return _name;}

void	Character::equip(AMateria* m)
{
	int i = 0;
	while(materia[i])
		i++;
	if(i < 4 && materia[i] == NULL)
		materia[i] = m;
	index = i;
}

void	Character::unequip(int idx)
{
	if(idx <= index && idx >= 0)
		materia[idx] = 0;
}

void	Character::use(int idx, ICharacter& target)
{
	if(idx <= index && idx >= 0)
		materia[idx]->use(target);
}