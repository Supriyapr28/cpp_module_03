/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:18:15 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 15:51:32 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "claptrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        virtual ~FragTrap();

        FragTrap &operator=(const FragTrap &src);

        void highFivesGuys();
};

#endif