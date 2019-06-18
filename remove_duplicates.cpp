#include<iostream>
using namespace std;
int removeEl(int index, int arr[100], int initlen);
int main(){
    int a[100], i, j, vlen, dup[100], c = 0, l = 0;
    cout << "Enter the number of elements: ";
    cin >> vlen;
    cout << "Enter the elements: ";
    for(i=0;i<vlen;i++){
        cin >> a[i];
    }
    for(i=0;i < vlen;i++){
        for(j= i + 1;j< vlen;j++){
            if(a[i] == a[j]){
                removeEl(i, a, vlen);
                vlen--;
                j--;
            }
        }
    }
    cout << "No Duplicates: ";
    for(j=0;j<vlen;j++){
        cout << a[j] << ", ";
    }
}
int removeEl(int index, int arr[100], int initlen){
    int i, j;
    for(i = 0; i < initlen; i++){
        if(i == index){
            for(j = i; j< (initlen - 1) ;j++){
               arr[j] = arr[j+1];
            }
        }
    }
}