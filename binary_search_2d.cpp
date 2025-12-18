#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>> m, int target) {
    int row=m.size();
    int col=m[0].size();
    int s=0;
    int e=row*col-1;        
    while(s<=e){
        int mid=s+(e-s)/2;
        
        // mid/col gives row of mid and mid%col gives col of mid in that matrix 

        int ele=m[mid/col][mid%col]; 
        if(ele==target){
            return 1;
        }
        if(ele<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}