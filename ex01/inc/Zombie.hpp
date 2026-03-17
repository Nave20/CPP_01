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

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
	public:
		Zombie();
		explicit Zombie(const std::string &name);
		~Zombie();

		void setNext(Zombie *next);
		void setName(const std::string &name);

		std::string getName() const;
		// Zombie		*getNext() const;

		void		announce() const;

	private:
		std::string _name;
		// Zombie *_next;
};

Zombie *zombieHorde(int N, std::string name);
// void	announceHorde(Zombie* zombieHorde);
// void	freeHorde(Zombie* zombieHorde);

#endif //ZOMBIE_HPP
