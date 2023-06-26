/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:01:34 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 19:27:21 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, const size_t len, void (*f)(const T &))
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
