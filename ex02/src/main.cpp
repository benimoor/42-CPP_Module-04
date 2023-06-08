/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ergrigor <ergrigor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:05:13 by ergrigor          #+#    #+#             */
/*   Updated: 2023/06/08 22:37:56 by ergrigor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal ashot;
	Animal *davo[6];
	
	for(int i = 0; i != 6; i++)
	{
		if (i < 3)
			davo[i] = new Cat();
		else	
			davo[i] = new Dog();
		davo[i]->makeSound();
	}
	for(int i = 0; i != 6; i++)
		delete davo[i];
	return 0;
}