#include<iostream>
using namespace std;
int dupCheck(int n, int a[100]);
int main(){
    int a[100], i, j, n, dup[100], c = 0, l = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        for(j= i + 1;j<n;j++){
            if(a[i] == a[j]){
                if(dupCheck(a[i], dup)){
                dup[l] = a[i];
                l++;
                }
            }
        }
    }
    cout << "Duplicates: ";
    for(j=0;j<l;j++){
        cout << dup[j] << ", ";
    }
}
int dupCheck(int n, int a[100]){
    int i, c = 0;
    for(i=0;i<n;i++){
        if(a[i] == n){
            c = 0;
            break;
        }
        else{
            c = 1;
        }
    }
    return c;
}