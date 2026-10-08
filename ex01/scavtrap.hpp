/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:40:48 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/08 13:22:50 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "claptrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        bool GateKeeperMode;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        virtual ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &src);

        void attack(const std::string& target);
        void guardGate();
};
#endif