/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassBrain.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:12:45 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/15 17:55:34 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

#include <iostream>

class Brain
{
	public:

		Brain(void);
		Brain(const Brain &other);
		~Brain(void);

		Brain	&operator=(const Brain &other);

		std::string	*getIdeas(void);

		void	copyIdeas(const std::string *ideas);
		void	addIdeas(std::string idea);
		void	printIdeas(void) const;
	
	private:

		std::string _ideas[100];
};

#endif
