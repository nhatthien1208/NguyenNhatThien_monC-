#include <iostream>

class NumberArray {
private:
    int size;
    double* array;

public:
    NumberArray(int arraySize) : size(arraySize) {
     
        array = new double[size];
    }

    ~NumberArray() {
     
        delete[] array;
    }

    void storeValue(int index, double value) {
        
        if (index >= 0 && index < size) {
            array[index] = value;
        }
    }

    double getValue(int index) const {
      
        if (index >= 0 && index < size) {
            return array[index];
        }
        return 0.0;  
    }

    double getMaximum() const {
    
        double maximum = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] > maximum) {
                maximum = array[i];
            }
        }
        return maximum;
    }

    double getMinimum() const {
       
        double minimum = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < minimum) {
                minimum = array[i];
            }
        }
        return minimum;
    }

    double getAverage() const {

        double sum = 0.0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum / size;
    }
};

int main() {
    int size;

    
    std::cout << "Nhập kích thước mảng: ";
    std::cin >> size;

  
    NumberArray array(size);

    for (int i = 0; i < size; i++) {
        double value;
        std::cout << "Nhập giá trị cho phần tử " << i << ": ";
        std::cin >> value;
        array.storeValue(i, value);
    }

   
    std::cout << "Giá trị cao nhất: " << array.getMaximum() << std::endl;
    std::cout << "Giá trị thấp nhất: " << array.getMinimum() << std::endl;
    std::cout << "Giá trị trung bình: " << array.getAverage() << std::endl;

    return 0;
}