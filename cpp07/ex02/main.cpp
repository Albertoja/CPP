/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aespinos <aespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:05:01 by aespinos          #+#    #+#             */
/*   Updated: 2023/06/26 19:52:53 by aespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassArray.hpp"
#include <cstdlib>

int main(void)
{
    Array<int> a(10);
    
    try
    {
        a[6] = 8;
        std::cout << a[6] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}
