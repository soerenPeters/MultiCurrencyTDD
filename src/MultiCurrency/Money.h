//
// Created by Soeren Peters on 02.07.17.
//

#ifndef MONEYEXAMPLETDD_MONEY_H
#define MONEYEXAMPLETDD_MONEY_H

#include <string>

class Money {
protected:
    int amount;
    std::string currency;

public:
    bool operator==(const Money &d) {
        return amount == d.amount && currency == d.currency;
    }
};

#endif //MONEYEXAMPLETDD_MONEY_H
