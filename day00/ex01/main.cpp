/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: guillaume <guillaume@student.le-101.fr>    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/10 14:22:44 by guillaume    #+#   ##    ##    #+#       */
/*   Updated: 2020/03/11 05:42:37 by guillaume   ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Contact.hpp"

int show_contact(Contact *list, std::string req) {
    if (!req.compare("1") || !req.compare("2") || !req.compare("3") || !req.compare("4") || 
        !req.compare("5") || !req.compare("6") || !req.compare("7") || !req.compare("8")) {
        if (list[req[0] - '1'].isFill()) {
            std::cout << "Contact " << req << " :" << std::endl;
            list[req[0] - '1'].describe_all();
        } else
            std::cout << "Contact " << req << " vide !" << std::endl;
        return (1);
    } else
        std::cout << "Index invalide" << std::endl;
    return (0);
}

int add_contact(Contact *list, std::string req) {
    std::string val;

    if (!req.compare("1") || !req.compare("2") || !req.compare("3") || !req.compare("4") || 
        !req.compare("5") || !req.compare("6") || !req.compare("7") || !req.compare("8")) {
        if (!list[req[0] - '1'].isFill()) {
            list[req[0] - '1'].setFirstName();
            list[req[0] - '1'].setLastName();
            list[req[0] - '1'].setNickname();
            list[req[0] - '1'].setLogin();
            list[req[0] - '1'].setPostalAddress();
            list[req[0] - '1'].setEmailAddress();
            list[req[0] - '1'].setPhoneNumber();
            list[req[0] - '1'].setBirthdayDate();
            list[req[0] - '1'].setFavoriteMeal();
            list[req[0] - '1'].setUnderwearColor();
            list[req[0] - '1'].setDarkestSecret();
            std::cout << "Contact " << req << " valide" << std::endl;
        } else {
            std::cout << "Contact " << req << " deja rempli !" << std::endl;
            std::cout << "Voulez vous ecraser le contact ? (o/n)" << std::endl;
            std::cin >> val;
            if (!val.compare("o")) {
                list[req[0] - '1'].setFirstName();
                list[req[0] - '1'].setLastName();
                list[req[0] - '1'].setNickname();
                list[req[0] - '1'].setLogin();
                list[req[0] - '1'].setPostalAddress();
                list[req[0] - '1'].setEmailAddress();
                list[req[0] - '1'].setPhoneNumber();
                list[req[0] - '1'].setBirthdayDate();
                list[req[0] - '1'].setFavoriteMeal();
                list[req[0] - '1'].setUnderwearColor();
                list[req[0] - '1'].setDarkestSecret();
            } else
                std::cout << "Annulation prise en compte." << std::endl;
        }
        return (1);
    } else
        std::cout << "Index invalide" << std::endl;
    return (0);
}

int main() {
    Contact list[8];
    std::string req;
    bool run;
    
    run = true;
    std::cout << "ADD    : Ajoute un nouveau contact" << std::endl;
    std::cout << "SEARCH : Cherche et affiche un contact" << std::endl;
    std::cout << "EXIT   : Quitte l'annuaire" << std::endl;
    while (run) {
        std::cin >> req;
        if (!req.compare("EXIT")) {
            std::cout << "Bye !" << std::endl;
            run = false;
        } else if (!req.compare("ADD")) {
            std::cout << std::endl << "Saisissez un index :" << std::endl;
            std::cin >> req;
            while (!add_contact(list, req)) {
                std::cout << std::endl << "Saisissez un index :" << std::endl;
                std::cin >> req;
            }
        } else if (!req.compare("SEARCH")) {
            std::cout   << std::right
                        << "|" << std::setw(10) << "index"
                        << "|" << std::setw(10) << "first_name"
                        << "|" << std::setw(10) << "last_name"
                        << "|" << std::setw(10) << "nickname"
                        << "|" << std::endl;
            for (int i = 0; i < 8; i++)
                if (list[i].isFill())
                    list[i].describe(i + 1);
            std::cout << std::endl << "Saisissez un index :" << std::endl;
            std::cin >> req;
            while (!show_contact(list, req)) {
                std::cout << std::endl << "Saisissez un index :" << std::endl;
                std::cin >> req;
            }
        }
    }
    return (0);
}