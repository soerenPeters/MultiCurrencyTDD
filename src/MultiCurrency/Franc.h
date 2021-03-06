//
// Created by Soeren Peters on 02.07.17.
//

#ifndef MONEYEXAMPLETDD_FRANC_H
#define MONEYEXAMPLETDD_FRANC_H

#include "Money.h"


class Franc : public Money{
public:
    Franc(int amount)  {
        this->amount = amount;
        this->currency = "CHF";
    }

    Franc plus(Franc d) {
        return Franc(d.amount + amount);
    }

    Franc times(int value) {
        return Franc(amount  * value);
    }


};


#endif //MONEYEXAMPLETDD_FRANC_H
