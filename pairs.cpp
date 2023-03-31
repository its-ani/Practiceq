#include<vector>
#include<iostream>
using namespace std;

int main()
{
vector<int> nums{1,1,1,1};

        int size1 = nums.size();
        cout<<size1<<endl;
        int max = 0;

        for (int i = 0; i<size1; i++){
            for (int j = i;j<size1; j++){
                if (nums[i] == nums[j]){
                    max++;}
                    cout<<max<<endl;

                }

    }
}

