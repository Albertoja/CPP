/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:12:45 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:53:46 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANIMAL_HPP
# define CLASSANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:

		Animal(void);
		Animal(std::string const type);
		Animal(const Animal &other);
		virtual	~Animal(void);

		Animal	&operator=(const Animal &other);

		const std::string	getType(void) const;

		virtual void	makeSound(void) const;

	protected:

		std::string		_type;
};

#endif
