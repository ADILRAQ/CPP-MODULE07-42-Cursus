/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:44:09 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/02 14:14:55 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class	Array{
	private:
		T				*arr;
		unsigned int	length;

	public:
		// Orthodox Canonical Form
		Array(void);
		~Array(void);
		Array(const Array &obj);
		Array	&operator = (const Array &source);

		// Param Constructor
		Array(unsigned int n);

		// Implemented Methods
		unsigned int	size(void) const;
		T				&operator [] (unsigned int idx);
		T				operator [] (unsigned int idx) const;

		// Nested Class
		class BadAccess : public std::exception {
			public:
				const char	*what(void) const throw();
		};
};

#include "Array.tpp"
