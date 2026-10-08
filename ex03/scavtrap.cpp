/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:40:43 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 14:35:12 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "ScavTrap " << this->name << " has been created!" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->GateKeeperMode = false;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
        this->GateKeeperMode = src.GateKeeperMode;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no energy to attack!" << std::endl;
        return;
    }
    else if (this->hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name << " has no hit points to attack!" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ScavTrap::guardGate()
{
    if (this->GateKeeperMode)
    {
        std::cout << "ScavTrap " << this->name << " is already in Gate Keeper mode." << std::endl;
    }
    else
    {
        this->GateKeeperMode = true;
        std::cout << "ScavTrap " << this->name << " has entered Gate Keeper mode." << std::endl;
    }
}

