/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:28:28 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 23:57:08 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACHTER_HPP
#define CHARACHTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*materia[4];
	int	index;
public:
	Character(/* args */);
	Character(std::string name);
	Character(Character &other);
	Character& operator=(Character &other);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif