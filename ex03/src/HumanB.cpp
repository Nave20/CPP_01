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

#include "../inc/HumanB.hpp"

#include <iostream>

HumanB::HumanB() : _name(NULL), _weapon(NULL){}

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {}

HumanB::HumanB(std::string name, Weapon* weapon) : _name(name), _weapon(weapon) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon->setType(weapon->getType());
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout<< this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
		std::cout<< this->_name << " attacks with their bare fists" << std::endl;
}