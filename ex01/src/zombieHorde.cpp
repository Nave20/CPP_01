/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*                                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpirotti <vpirotti@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   GitHub : @Nave20                                  #+#    #+#             */
/*   28 is the new 42                                 ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
		return NULL;

	Zombie* zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
		zombieHorde[i].announce();
	}
	return zombieHorde;
}

// Zombie* zombieHorde( int N, std::string name )
// {
// 	int	i = 1;
// 	Zombie* head;
// 	Zombie* node;
// 	Zombie* next;
//
// 	if (N <= 0)
// 		return NULL;
// 	head = new Zombie(name);
// 	node = head;
// 	while ( i < N )
// 	{
// 		next = new Zombie(name);
// 		node->setNext(next);
// 		node = next;
// 		i++;
// 	}
// 	return head;
// }

// void announceHorde(Zombie* zombieHorde)
// {
// 	Zombie* next;
//
// 	if (zombieHorde == NULL)
// 		return;
// 	zombieHorde->announce();
// 	next = zombieHorde->getNext();
// 	while (next != NULL)
// 	{
// 		next->announce();
// 		next = next->getNext();
// 	}
// }

// void freeHorde(Zombie* zombieHorde)
// {
// 	Zombie* next;
//
// 	if (zombieHorde == NULL)
// 		return;
// 	next = zombieHorde->getNext();
// 	while (next != NULL)
// 	{
// 		delete zombieHorde;
// 		zombieHorde = next;
// 		next = next->getNext();
// 	}
// 	delete zombieHorde;
// }