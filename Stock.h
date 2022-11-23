//
// Created by win10 on 2022/11/23.
//

#ifndef STOCKTEST_STOCK_H
#define STOCKTEST_STOCK_H
#include <string>
#include <memory>

class Stock {
public:
    Stock(const std::string& id):
    m_id(id)
    {}
    ~Stock();
private:
    std::string m_id;
};


#endif //STOCKTEST_STOCK_H
