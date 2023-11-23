#include <iostream>
#include <string>

class PersonalInfo {
private:
    std::string name;
    std::string address;
    int age;
    std::string phoneNumber;

public:
    PersonalInfo(const std::string& personName, const std::string& personAddress, int personAge, const std::string& personPhoneNumber)
        : name(personName), address(personAddress), age(personAge), phoneNumber(personPhoneNumber) {}

    std::string getName() const {
        return name;
    }

    std::string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    void setName(const std::string& personName) {
        name = personName;
    }

    void setAddress(const std::string& personAddress) {
        address = personAddress;
    }

    void setAge(int personAge) {
        age = personAge;
    }

    void setPhoneNumber(const std::string& personPhoneNumber) {
        phoneNumber = personPhoneNumber;
    }
};

int main() {
    PersonalInfo myInfo("Your Name", "Your Address", 25, "Your Phone Number");
    PersonalInfo friendInfo("Friend's Name", "Friend's Address", 30, "Friend's Phone Number");
    PersonalInfo familyInfo("Family Member's Name", "Family Member's Address", 40, "Family Member's Phone Number");

    std::cout << "My Information:" << std::endl;
    std::cout << "Name: " << myInfo.getName() << std::endl;
    std::cout << "Address: " << myInfo.getAddress() << std::endl;
    std::cout << "Age: " << myInfo.getAge() << std::endl;
    std::cout << "Phone Number: " << myInfo.getPhoneNumber() << std::endl;

    std::cout << std::endl;

    std::cout << "Friend's Information:" << std::endl;
    std::cout << "Name: " << friendInfo.getName() << std::endl;
    std::cout << "Address: " << friendInfo.getAddress() << std::endl;
    std::cout << "Age: " << friendInfo.getAge() << std::endl;
    std::cout << "Phone Number: " << friendInfo.getPhoneNumber() << std::endl;

    std::cout << std::endl;

    std::cout << "Family Member's Information:" << std::endl;
    std::cout << "Name: " << familyInfo.getName() << std::endl;
    std::cout << "Address: " << familyInfo.getAddress() << std::endl;
    std::cout << "Age: " << familyInfo.getAge() << std::endl;
    std::cout << "Phone Number: " << familyInfo.getPhoneNumber() << std::endl;

    return 0;
}