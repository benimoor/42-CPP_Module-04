/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 00:44:30 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/09 00:57:34 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(/* args */)
{
	for(int i = 0; i < 4; i++)
		materia[i] = 0;
}
MateriaSource::MateriaSource(MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.materia[i])
			materia[i] = (other.materia[i])->clone();
	}
}
MateriaSource& MateriaSource::operator=(MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
			delete materia[i];
		for(int i = 0; i < 4; i++)
		{
			if (other.materia[i])
				materia[i] = other.materia[i]->clone();
			else
				materia[i] = 0;
		}
	}
	return *this;
}
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}
void MateriaSource::learnMateria(AMateria* m)
{
	int i = 0;

	while (materia[i] != 0 && i < 4)
		i++;
	if (i == 4)
		return ;
	materia[i] = m;
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (materia[i] && (materia[i])->getType() != type && i < 4)
		i++;
	if (i == 4 || !materia[i])
	{
		return (NULL);
	}
	return ((materia[i])->clone());
}