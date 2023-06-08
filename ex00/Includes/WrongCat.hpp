/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:30:34 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 21:31:26 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat(/* args */);
	WrongCat(WrongCat &other);
	WrongCat& operator=(WrongCat &other);
	~WrongCat();
	void makeSound() const;
};

#endif