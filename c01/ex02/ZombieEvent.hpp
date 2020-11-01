/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hthomas <hthomas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 16:14:25 by hthomas           #+#    #+#             */
/*   Updated: 2020/11/01 19:21:52 by hthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	type;
	public:
		ZombieEvent(void);
		std::string	const	getType();
		void				setZombieType(std::string type);
		Zombie				*newZombie(std::string name);
		Zombie				*randomChump();
};

#endif
