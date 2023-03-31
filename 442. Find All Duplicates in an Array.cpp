#include<iostream>
#include<vector>

using namespace std;

int main(){
 vector<int> n={4,3,2,7,8,2,3,1};
 vector<int> duplicates;

        for(int i=0;i<n.size();i++)
        {   // evaluate index of selected element if array would have been sorted..
            int indexOfElem = abs(n[i]) - 1;
            // negate the element
            n[indexOfElem] = - n[indexOfElem];
            // if this element is positive means double negation had happened which
            // means we editied this element twice.
            if(n[indexOfElem]>0)
                duplicates.push_back(indexOfElem+1);
        }
        for(auto val : duplicates){
            cout<<val;
        }

        return 0;
}


/*
vector<int> res;
        int i = 0;
        while (i < nums.size()) {
            if (nums[i] != nums[nums[i]-1]) swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        for (i = 0; i < nums.size(); i++) {
            cout<<nums[i];
        }
        cout<<endl;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i + 1){
                cout<<nums[i];
            }
        }
*/
