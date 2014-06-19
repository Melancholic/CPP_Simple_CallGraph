#include<iostream>
#include<cmath>
#include<algorithm> 
#include<vector> 
void f1();
void f2();
void f3();
void f4();
void f5();

int main(){
    f1();
    f2();
    f3();
    f4();
    f5();
    return 1;
}

void f1(){
    std::cout<<"Hello from f1()\n";
}

void f2(){
    static char test=0;
    switch(test){
        case 0:{
            std::cout<<"And recursion? ";
            test++;
            f2();
        };break;
        case 1:{
            std::cout<<"Yes";
            test++;
            f2();
        };break;
        case 2:{
            std::cout<<" of";
            test++;
            f2();
        };break;
        case 3:{
            std::cout<<" course!\n";
            return;
        };break;
        default:{
            return;
        }
    }
}


void f3(){
    double res= pow(5,2);
    std::cout<<"5^2="<< res <<"\n";
}
void f4(){
    /* sqrt(2);
     * pow(5,2);
     * srand();
     */
    //nothing here will be called
} 
void f5(){
    std::vector<int> arr;
    arr.push_back(10);
    arr.push_back(15);
    std::sort (arr.begin(), arr.end());
    arr.size();
    arr.clear();
}
