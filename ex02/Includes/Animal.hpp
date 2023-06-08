/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:49:09 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:26:55 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(Animal &other);
	Animal& operator=(Animal &other);
	virtual ~Animal();
	virtual void makeSound() const = 0;
	std::string	getType() const;
};

#endif