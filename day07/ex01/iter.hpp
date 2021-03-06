/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@42lyon.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 22:24:18 by gbaud             #+#    #+#             */
/*   Updated: 2020/12/21 13:30:49 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void iter(const T *arr, int len, void fn(T const &)) {
    for (int i = 0; i < len; i++)
        fn(arr[i]);
}
