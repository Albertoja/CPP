/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassWrongAnimal.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:23:14 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 16:23:18 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSWRONGWrongAnimal_HPP
# define CLASSWRONGWrongAnimal_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(std::string const type);
		WrongAnimal(const WrongAnimal &other);
		virtual	~WrongAnimal(void);

		WrongAnimal	&operator=(const WrongAnimal &other);

		const std::string	getType(void) const;

		virtual void	makeSound(void) const;

	protected:

		std::string		_type;
};

#endif
