#include<iostream>

using namespace std;

template <typename T>
class node{

    private:
        T val{};
        node* left;
        node* right;

    public:
        node(): val(T()), left(nullptr), righ(nullptr);
};

template <typename T>
class BinaryTree : node{



};