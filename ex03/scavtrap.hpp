/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 11:40:48 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 16:02:27 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "claptrap.hpp"

class ScavTrap :virtual public ClapTrap
{
    private:
        bool GateKeeperMode;
    public:
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &src);
        virtual ~ScavTrap();

        ScavTrap &operator=(const ScavTrap &src);

        void attack(const std::string& target);
        void guardGate();
};
#endif