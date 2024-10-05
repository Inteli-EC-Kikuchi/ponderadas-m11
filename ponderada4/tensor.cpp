#include <vector>
using namespace std;

template<int D, typename T>
struct Vec : public vector<Vec< D-1 , T>> {
    static_assert(D >= 1, "Tensor dimension must be greater than 0");
    template<typename... Args>
    Vec(int n = 0, Args... args) : vector<Vec < D-1, T>>(n, Vec<D-1, T>(args...)){}
};

template<typename T>
struct Vec<1, T> : public vector<T> {
    Vec(int n= 0, const T& val = T()) : vector<T>(n,val){}
};

int main(void){
    Vec<3, int> tensor(1,2,3,0);

    
}