/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:29:34 by gbaud             #+#    #+#             */
/*   Updated: 2020/09/24 09:29:53 by gbaud            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// Pony allocation and auto delete
void ponyOnTheStack() {
    Pony poney("PoneyS", 5);
    poney.jump();
}

// Pony allocation and delete
void ponyOntheHeap() {
    Pony *poney = new Pony("PoneyH", 18);
    poney->jump();
    delete poney;
}

int main() {
    ponyOnTheStack();
    ponyOntheHeap();
    return (0);
}