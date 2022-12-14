#include<iostream>
using namespace std;

int main () {
    int x, y, z;
    int array[6]={5,1,3,2,4,6};
    int arraySize=sizeof(array)/sizeof(int);
    cout<<"Input: ";
    for(x=0; x<arraySize; x++) {
        cout<<array[x]<<"\t";
    }
    cout<<endl;
    for(x=0; x<arraySize; x++) {
        for(y=x+1; y<arraySize; y++) {
            if(array[y]<array[x]) {
                z=array[x];
                array[x]=array[y];
                array[y]=z;
            }
        }
    }
    cout<<"Output: ";
    for(x=0; x<arraySize; x++) {
        cout<<array[x]<<"\t";
    }
    cout<<endl;
    return 0;
}
