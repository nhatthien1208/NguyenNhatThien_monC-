#include <iostream>

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupiedRooms = 0;

    std::cout << "Nhập số tầng của khách sạn: ";
    std::cin >> numFloors;

    for (int floor = 1; floor <= numFloors; floor++) {
        int numRooms;
        int numOccupiedRooms;

        std::cout << "Nhập số phòng trên tầng " << floor << ": ";
        std::cin >> numRooms;

        std::cout << "Nhập số phòng đã được đặt trên tầng " << floor << ": ";
        std::cin >> numOccupiedRooms;

        totalRooms += numRooms;
        totalOccupiedRooms += numOccupiedRooms;
    }

    int totalUnoccupiedRooms = totalRooms - totalOccupiedRooms;
    double occupancyRate = (static_cast<double>(totalOccupiedRooms) / totalRooms) * 100;

    std::cout << "Tổng số phòng trong khách sạn: " << totalRooms << "\n";
    std::cout << "Số phòng đã được đặt: " << totalOccupiedRooms << "\n";
    std::cout << "Số phòng chưa được đặt: " << totalUnoccupiedRooms << "\n";
    std::cout << "Tỷ lệ phòng đã được đặt: " << occupancyRate << "%\n";

    return 0;
}