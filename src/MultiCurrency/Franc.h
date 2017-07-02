//
// Created by Soeren Peters on 02.07.17.
//

#ifndef MONEYEXAMPLETDD_FRANC_H
#define MONEYEXAMPLETDD_FRANC_H




class Franc {
public:
    Franc(int amount) {
        this->amount = amount;
    }


    Franc plus(Franc d) {
        return Franc(d.amount + amount);
    }

    Franc times(int multiplicator) {
        return Franc(amount  * multiplicator);
    }

    bool operator==(const Franc d) {
        return amount == d.amount;
    }

private:
    int amount;
};


#endif //MONEYEXAMPLETDD_FRANC_H
