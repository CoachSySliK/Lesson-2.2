#include <iostream>

using namespace std;

int main()
{
    int timeWorkShift = 600;
    int timeOrder = 5;
    int timeAssemdly = 15;
    
    cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену.\n";
    cout << "Введите длительность смены в минутах: " << timeWorkShift << "\n";
    cout << "Сколько минут клиент делает заказ? " << timeOrder << "\n";
    cout << "Сколько минут кассир собирает заказ? " << timeAssemdly << "\n";
    cout << "-----Считаем-----\n";
    cout << "За смену длиной " << timeWorkShift << " минут кассир успеет обслужить " 
        << timeWorkShift / (timeOrder + timeAssemdly) << " клиентов.\n";

   return 0;
}

