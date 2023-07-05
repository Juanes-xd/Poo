#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>nums = {3,4,7,7,12,23,2,1,0,18,5,13};
    int i, pos, actual;
    for (i = 1; i < nums.size(); i++) {
    actual = nums[i];
    for (pos = i; pos > 0 && nums[pos - 1] > actual; pos--) {
    nums[pos] = nums[pos - 1];
    }
    nums[pos] = actual;
    for(i=0;i<nums.size();i++){
        cout<<nums[pos]<<" ";
    }

    }
    return 0;
}