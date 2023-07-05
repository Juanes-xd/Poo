#include <iostream>
#include <vector>
using namespace std;



bool isValidSubsequence(vector<int> array, vector<int> sequence) {
    
 int arrIdx=0;
 int seqIdx=0;
	while(arrIdx < array.size() && seqIdx < sequence.size()){
		if(array[arrIdx]==sequence[seqIdx]){
             seqIdx++;
        }
        arrIdx++;
        cout<<"si";
	}
  return false;
  cout<<"no";
}


int main(){
 vector<int> array={1,2,3,4,5,6};
vector<int> sequence={1, 6, -1, 10};
isValidSubsequence(array,sequence);

return 0;
}