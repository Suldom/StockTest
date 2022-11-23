//
// Created by win10 on 2022/11/23.
//

#ifndef STOCKTEST_STOCKMANAGER_H
#define STOCKTEST_STOCKMANAGER_H
#include <memory>
#include <string>
#include <mutex>
#include <thread>

class Stock;
class StockManager {
public:
    std::shared_ptr<Stock> get(const std::string& id)
    {

    }

private:
    void deleteStock(Stock* pStock)
    {

    }
private:
    std::map<std::string, std::weak_ptr<Stock> > m_stocks;
};


#endif //STOCKTEST_STOCKMANAGER_H
