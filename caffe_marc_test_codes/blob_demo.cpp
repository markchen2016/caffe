#include <vector>
#include <iostream>
#include "../include/caffe/blob.hpp"

int main(){
    caffe::Blob<float> a;
    std::cout << "Size : " << a.shape_string() << std::endl;
    a.Reshape(1,2,3,4);
    std::cout << "Size : " << a.shape_string() << std::endl;
    return 0;
}
