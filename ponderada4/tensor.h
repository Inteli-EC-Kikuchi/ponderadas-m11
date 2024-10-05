#include <vector>
#include <iostream>
using namespace std;

template<int D, typename T>
class Vec : public vector<Vec< D-1 , T>> {
public:
    static_assert(D >= 1, "Tensor dimension must be greater than 0");
    
    template<typename... Args>
    Vec(int n = 0, Args... args) : vector<Vec < D-1, T>>(n, Vec<D-1, T>(args...)){}
    
    void printTensor() const{
        for(const auto& tensor : *this)
            tensor.printTensor();
    }

};

template<typename T>
class Vec<1, T> : public vector<T> {
public:
    Vec(int n= 0, const T& val = T()) : vector<T>(n,val){}

    void printTensor() const {
        for(const auto& element : *this)
            cout << element << " ";
        cout << endl;
    }

};