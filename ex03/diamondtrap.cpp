/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamondtrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:42:51 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 16:38:59 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "diamondtrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name), name(name)
{
    std::cout << "DiamondTrap " << this->name << " has been born!" << std::endl;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = src;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " is destroyed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    std::cout << "Copy assignment operator is called" << std::endl;
    if (this != &src)
    {
        ClapTrap::name = src.ClapTrap::name;
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    if (this->hitPoints == 0)
    {
        std::cout << "DiamondTrap " << this->name << " is dead and cannot reveal its identity!" << std::endl;
        return;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << "DiamondTrap " << this->name << " has no energy to reveal its identity!" << std::endl;
        return;
    }
    std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
    this->energyPoints--;
}