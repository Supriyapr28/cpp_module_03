/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:59:33 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 14:54:50 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CLAPTRAP_HPP
#define EX01_CLAPTRAP_HPP

#include <iostream>
#include <algorithm>

class ClapTrap
{
    protected:
       std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        ~ClapTrap(); 

        ClapTrap &operator=(const ClapTrap &src);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);  
};

#endif