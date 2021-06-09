#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A, B;

void Init(){
    A.clear();
    B.clear();
}


void Input(){
    int num_A, num_B;
    cin>>num_A>>num_B;
    
    int tmp;
    for(int j=0;j<num_A;j++){
        cin>>tmp;
        A.push_back(tmp);
    }
    for(int j=0;j<num_B;j++){
        cin>>tmp;
        B.push_back(tmp);
    }
}


void Sort(){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
}


int BinarySearch(int a){
    int start = 0, end = (int)B.size()-1;
    int mid = (start + end) / 2;
    
    while(start <= end){
        if(a > B[mid])
            start = mid+1;
        else
            end = mid-1;
        
        mid = (start + end) / 2;
    }
    
    return start;
}


int Solution(){
    int answer = 0;
    for(int j=0;j<A.size();j++){
        answer += BinarySearch(A[j]);
    }
    return answer;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        Init();
        Input();
        Sort();
        cout<<Solution()<<endl;

    }
}

