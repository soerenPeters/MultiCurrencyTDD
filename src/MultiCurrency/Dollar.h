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

    Dollar times(int multiplicator) {
        return Dollar(amount  * multiplicator);
    }

    bool operator==(const Dollar d) {
        return amount == d.amount;
    }

private:
    int amount;
};


#endif
