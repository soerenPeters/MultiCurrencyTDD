//
// Created by Soeren Peters on 02.07.17.
//

#ifndef MONEYEXAMPLETDD_MONEY_H
#define MONEYEXAMPLETDD_MONEY_H

class Money {
protected:
    int amount;

public:
    bool operator==(const Money &d) {
        return amount == d.amount;
    }
};

#endif //MONEYEXAMPLETDD_MONEY_H
