/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:59:41 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 19:16:20 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
const T	&min(T const &a, T const &b)
{
	return (a <=b ? a : b);
}

template <typename T>
const T	&max(T const &a, T const &b)
{
	return (a >=b ? a : b);
}

#endif
