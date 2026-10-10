#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>

struct Order {
    std::string item;
    double price;
    int quantity;
};

using OrderAction = void (*)(const Order &);


void for_each_order(const Order orders[], int n, OrderAction action) {
    for (int i = 0; i < n; ++i) {
        action(orders[i]);
    }
}


void print_order(const Order &o) {
    std::cout << o.quantity << " x " << o.item << " @ $"
              << std::fixed << std::setprecision(2) << o.price << '\n';
}

void print_if_large(const Order &o) {
    if (o.price * o.quantity > 10.0) {
        print_order(o);
    }
}


[[nodiscard]] double total_revenue(const Order orders[], int n) {
    double total = 0.0;
    auto add = [&](const Order &o) { total += o.price * o.quantity; };
    for (int i = 0; i < n; ++i) {
        add(orders[i]);
    }
    return total;
}

int main() {
    Order orders[] = {
        {"Latte",      4.50, 2},
        {"Espresso",   3.00, 1},
        {"Cappuccino", 5.25, 3},
    };
    const int n = sizeof(orders) / sizeof(orders[0]);

    std::cout << "All orders:\n";
    for_each_order(orders, n, print_order);

    std::cout << "\nLarge orders (> $10):\n";
    for_each_order(orders, n, print_if_large);

    std::cout << "\nItem names:\n";
    for_each_order(orders, n, [](const Order &o) {
        std::string name = o.item;
        for (char &c : name) {
            c = static_cast<char>(std::toupper(static_cast<unsigned char>(c)));
        }
        std::cout << name << '\n';
    });

    std::cout << "\nTotal revenue: $" << std::fixed << std::setprecision(2)
              << total_revenue(orders, n) << '\n';
}