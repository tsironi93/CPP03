/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itsiros <itsiros@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:19:22 by itsiros           #+#    #+#             */
/*   Updated: 2025/07/10 15:11:18 by itsiros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "AnsiColors.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "Default FragTrap created." << RESET << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << GREEN << "FragTrap " << this->_name << " created." << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << GREEN << "FragTrap " << this->_name << " copied." << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
		std::cout << GREEN << "FragTrap " << this->_name << " assigned." << RESET << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap " << this->_name << " destroyed." << RESET << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << GREEN << "FragTrap " << this->_name << " is giving high fives!" << RESET << std::endl;
}
