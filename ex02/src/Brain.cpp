/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:00:24 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:08:15 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "[Brain] default ctor" << std::endl;
}

Brain::Brain(Brain &other)
{
	for(int i = 0; i <=100; i++)
		ideas[i] = other.ideas[i];
	std::cout << "[Brain] cpy ctor" << std::endl;
}

Brain& Brain::operator=(Brain &other)
{
	if(this != &other)
	{
		for(int i = 0; i <=100; i++)
			ideas[i] = other.ideas[i];
	}
	std::cout << "[Brain] operator=" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "[Brain] dtor" << std::endl;
}