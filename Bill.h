#pragma once
#include"Order.h"

class Bill {
    private:
        int BillID;
        int SumPrice;
        Order o;
    public:
        Bill();
        Bill(Order);
        virtual ~Bill();
        void setBillID(int);
        int getBillID();
        void setSumPrice();
        void setOrder(Order);
        Order getOrder();
        void Show();
};