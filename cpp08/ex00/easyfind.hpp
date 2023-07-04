/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:41:42 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/27 18:41:43 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iterator>

class NotFoundException: public std::exception
{
	public:

		const char *what(void) const throw() 
        {
         return ("Number not found"); 
        }
};

template <typename T>
typename T::const_iterator	easyfind(T &list, int n)
{
	typename T::const_iterator	it;

	it = std::find(list.begin(), list.end(), n);
	if (it == list.end())
		throw (NotFoundException());
	return (it);
}

#endif
