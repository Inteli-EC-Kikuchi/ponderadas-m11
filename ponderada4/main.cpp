
#include "tensor.h"

int main(void){
    Vec<3, int> tensor1(1,2,3,0);
    Vec<3, int> tensor2(3,3,4,0);

    tensor1.printTensor();
    tensor2.printTensor();

}