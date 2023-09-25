/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:06:06 by araqioui          #+#    #+#             */
/*   Updated: 2023/09/25 16:22:52 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void	swap(T &a, T &b)
{
	T	temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T> const T	&max(T &a, T &b)
{
	if (a == b)
		return (b);
	return (a > b ? a : b);
}

template <typename T> const T	&min(T &a, T &b)
{
	if (a == b)
		return (b);
	return (a > b ? b : a);
}