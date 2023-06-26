/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seriallize.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:39:33 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 17:39:34 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

Data *deserialize(uintptr_t temp)
{
	return (reinterpret_cast<Data *>(temp));
}

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
