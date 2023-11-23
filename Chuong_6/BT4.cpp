#include <iostream>
#include <string>

int getNumAccidents(const std::string& region)
{
    int numAccidents;
    std::cout << "Nhập số vụ tai nạn ô tô được báo cáo trong khu vực " << region << ": ";
    std::cin >> numAccidents;

    // Validate input
    while (numAccidents < 0)
    {
        std::cout << "Đầu vào không hợp lệ. Số vụ tai nạn không thể nhỏ hơn 0. Nhập số vụ tai nạn ô tô được báo cáo trong khu vực " << region << ": ";
        std::cin >> numAccidents;
    }

    return numAccidents;
}

void findLowest()
{
    int minAccidents = INT_MAX;
    std::string minRegion;

    for (int i = 0; i < 5; ++i)
    {
        std::string region;
        int accidents;

        switch (i)
        {
        case 0:
            region = "Bắc";
            break;
        case 1:
            region = "Nam";
            break;
        case 2:
            region = "Đông";
            break;
        case 3:
            region = "Tây";
            break;
        case 4:
            region = "Trung Bộ";
            break;
        }

        accidents = getNumAccidents(region);

        if (accidents < minAccidents)
        {
            minAccidents = accidents;
            minRegion = region;
        }
    }

    std::cout << "Khu vực có ít vụ tai nạn ô tô được báo cáo nhất là khu vực " << minRegion << "." << std::endl;
    std::cout << "Số vụ tai nạn: " << minAccidents << std::endl;
}

int main()
{
    findLowest();

    return 0;
}