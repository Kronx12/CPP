/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: guillaume <guillaume@student.le-101.fr>    +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/03/10 14:44:54 by guillaume    #+#   ##    ##    #+#       */
/*   Updated: 2020/03/11 04:20:14 by guillaume   ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <cstring>

class Contact {
    public:
    
    void    describe(int index);
    void    describe_all();
    bool    isFill();

    // Getters
    std::string  getFirstName();
    std::string  getLastName();
    std::string  getNickname();
    std::string  getLogin();
    std::string  getPostalAddress();
    std::string  getEmailAddress();
    std::string  getPhoneNumber();
    std::string  getBirthdayDate();
    std::string  getFavoriteMeal();
    std::string  getUnderwearColor();
    std::string  getDarkestSecret();

    // Setters
    void    setFirstName();
    void    setLastName();
    void    setNickname();
    void    setLogin();
    void    setPostalAddress();
    void    setEmailAddress();
    void    setPhoneNumber();
    void    setBirthdayDate();
    void    setFavoriteMeal();
    void    setUnderwearColor();
    void    setDarkestSecret();
    private:

    std::string first_name,
                last_name,
                nickname,
                login,
                postal_address,
                email_address,
                phone_number,
                birthday_date,
                favorite_meal,
                underwear_color,
                darkest_secret;
};

#endif