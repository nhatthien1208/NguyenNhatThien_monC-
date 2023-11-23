#include <iostream>
#include <string>

int main()
{
    // Define three string objects.
    std::string str1, str2, str3;

    // Assign values to all three.
    str1 = "ABC";
    str2 = "DEF";
    str3 = str1 + str2;

    // Use a range-based for loop to display str3 one character at a time.
    for (char ch : str3)
        std::cout << ch;
    std::cout << std::endl;

    // Compare str1 with str2.
    if (str1 < str2)
        std::cout << "str1 is less than str2\n";
    else
        std::cout << "str1 is not less than str2\n";

    return 0;
}