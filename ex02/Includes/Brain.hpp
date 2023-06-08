/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:40:47 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:00:41 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
protected:
	std::string ideas[100];
public:
	Brain(/* args */);
	Brain(Brain &Brain);
	Brain &operator=(Brain &Brain);
	~Brain();
};

#endif