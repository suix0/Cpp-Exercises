#include <iostream>

template <typename T>
class Pair{
    private:
        T first;
        T second;

    public:
        Pair(T firstValue, T secondValue): first(firstValue), second(secondValue) {}

        T getFirst() const { 
            return first; 
        } 

        T getSecond() const {
            return second;
        }
};

int main(){
    Pair<int> intPair(10, 20);
    Pair<char> charPair('a', 'b');

    std::cout << intPair.getFirst() << ", " << intPair.getSecond() << std::endl;
    std::cout << charPair.getFirst() << ", " << charPair.getSecond() << std::endl;
}