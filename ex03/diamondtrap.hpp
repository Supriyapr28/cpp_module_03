/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diamondtrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:42:51 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 15:58:27 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "scavtrap.hpp"
#include "fragtrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;   
public:
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &src);
    virtual ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &src);

    void attack(const std::string& target);
    void whoAmI();
};
#endif 