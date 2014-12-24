#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};

decltype(odd) &arrPtr(int i){

return (i%2) ? odd : even;
}

int main(){

int *one = arrPtr(2);

 for(int i =0;i<5;i++){
 
    cout << *(one++)<<endl;
 }

return 0;
}