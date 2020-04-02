/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaud <gbaud@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:29:34 by gbaud             #+#    #+#             */
/*   Updated: 2020/03/13 12:29:34 by gbaud            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// Pony allocation and auto delete
void ponyOnTheStack() {
    Pony poney = Pony("PoneyS");
    poney.jump();
}

// Pony allocation and delete
void ponyOntheHeap() {
    Pony *poney = new Pony("PoneyH");
    poney->jump();
    delete poney;
}

int main() {
    ponyOnTheStack();
    ponyOntheHeap();
    return (0);
}