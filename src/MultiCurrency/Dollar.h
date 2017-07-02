#ifndef MONEYEXAMPLETDD_DOLLAR_H
#define MONEYEXAMPLETDD_DOLLAR_H


class Dollar {
public:
    Dollar(int amount) {
        this->amount = amount;
    }


    Dollar plus(Dollar d) {
        return Dollar(d.amount + amount);
    }

    int amount;
};


#endif
