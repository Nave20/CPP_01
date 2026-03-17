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

#include <iostream>

Zombie::Zombie() : _name("Jean") {}

Zombie::Zombie(const std::string &name) : _name(name) {}

Zombie::~Zombie()
{
	std::cout<< this->_name << ": Was easy peasy lemon squeezed" << std::endl;
}

void Zombie::setName(const std::string &name) {this->_name = name;}
// void Zombie::setNext(Zombie *next) {this->_next = next;}

std::string Zombie::getName() const {return _name;}
// Zombie		*Zombie::getNext() const {return _next;}

void Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
