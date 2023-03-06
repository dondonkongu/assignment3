#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int x , y ;
    cout<<"The value before swapping are: "<<endl;
    cout<<"element 1 = ";
    cin>>x;
    cout<<"element 2 = ";
    cin>>y;
    cout<<"The value after swapping are: "<<endl;
    swap(&x, &y);
    cout<<"element 1 = " <<x<<endl;
    cout<<"element 2 = " <<y<<endl;
    return 0;
}