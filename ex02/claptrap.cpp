/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 12:27:36 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/08 12:51:04 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"claptrap.hpp"

ClapTrap::ClapTrap():name("Default"),hitPoints(10),energyPoints(10),attackDamage(0)
{
    std::cout << "Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),hitPoints(10),energyPoints(10),attackDamage(0)
{
    // std::cout << "Default and Parametric constructor is called" << std::endl;
    std::cout << "Claptrap " << this->name << " has been created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor is called" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "ClapTrap assignment operator is called" << std::endl;
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has no energy to attack!" << std::endl;
        return;
    }
    else if(this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << "has no hit points to attack!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage" << std::endl;
    this->hitPoints -= std::min(this->hitPoints, amount);
}
        
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " has low energy!.It can not perform any action!!" << std::endl;
        return;
    }
    else if(this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}
