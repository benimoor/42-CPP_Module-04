/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:18:17 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:29:39 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(WrongAnimal &other);
	WrongAnimal& operator=(WrongAnimal &other);
	~WrongAnimal();
	std::string	getType() const;
	void makeSound() const;
};


#endif