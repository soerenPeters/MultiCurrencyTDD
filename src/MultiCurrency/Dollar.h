#ifndef MONEYEXAMPLETDD_DOLLAR_H
#define MONEYEXAMPLETDD_DOLLAR_H

#include "Money.h"

class Dollar : public Money {
public:
    Dollar(int amount)  {
        this->amount = amount;
        this->currency = "USD";
    }

    Dollar plus(Dollar d) {
        return Dollar(d.amount + amount);
    }

    Dollar times(int multiplicator) {
        return Dollar(amount  * multiplicator);
    }


};


#endif
