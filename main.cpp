#include <iostream>
#include <vector>
#include <string>

struct Item {
    std::string name;
    int quantity;
    double price;
};

void addItem(std::vector<Item>& inventory, const std::string& name, int quantity, double price) {
    Item newItem;

    newItem.name = name;
    newItem.quantity = quantity;
    newItem.price = price;

    inventory.push_back(newItem);
}

void displayInventory(const std::vector<Item>& inventory) {
    std::cout << "Inventory:\n";
    for (const auto& item : inventory) {
        std::cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: $" << item.price << '\n';
    }
}

void updateQuantity(std::vector<Item>& inventory, const std::string name, int quantity) {
    for (auto& item : inventory) {
        if (item.name == name) {
            item.quantity = quantity;
            std::cout << "Updated " << name << " quantity to " << quantity << '\n';
            return;
        }
    }
    std::cout << "Item " << name << " was not found in inventory\n";
}

void removeItem()

int main() {
    std:: vector<Item> inventory;

    addItem(inventory, "Apple", 50, 0.50);
    addItem(inventory, "Banana", 100, 0.25);
    addItem(inventory, "Orange", 75, 0.30);

    updateQuantity(inventory, "Apple", 25);

    displayInventory(inventory);
}