/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spaipur- <spaipur-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:18:15 by spaipur-          #+#    #+#             */
/*   Updated: 2026/10/05 16:01:25 by spaipur-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_FRAGTRAP_HPP
#define EX03_FRAGTRAP_HPP

#include "claptrap.hpp"

class FragTrap :virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        virtual ~FragTrap();

        FragTrap &operator=(const FragTrap &src);

        void highFivesGuys();
};

#endif