/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:07:15 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 23:14:20 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(/* args */);
	Ice(Ice &other);
	Ice& operator=(Ice &other);
	~Ice();

	virtual AMateria* clone() const;
	void use(ICharacter& target);
};

#endif