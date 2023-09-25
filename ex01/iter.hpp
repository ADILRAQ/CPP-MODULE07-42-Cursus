/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:48:48 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 17:02:38 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void	print(const T &arr)
{
	std::cout << arr << std::endl;
}

template <typename T> void	iter(T *arr, int len, void fun(const T &))
{
	int	i = -1;

	while (++i < len)
		fun(arr[i]);
}
