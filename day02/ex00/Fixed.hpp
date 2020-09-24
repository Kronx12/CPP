/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 06:43:55 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 20:25:10 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
    private:
        int value;
        static const int bits = 8;

    public:
        Fixed();
        Fixed(const Fixed &);
        void operator=(const Fixed &fixed);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif