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
		explicit Zombie(std::string name);
		~Zombie();

		std::string getName() const;
		void		announce() const;

	private:
		std::string _name;
};

Zombie *newZombie(const std::string& name);
void	randomChump(std::string name);
#endif //ZOMBIE_HPP
