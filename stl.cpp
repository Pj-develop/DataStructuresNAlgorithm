#include<iostream>
#include<vector>
#include<list>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool comp(pair<string,int> p1,pair<string,int> p2){
    if(p1.second<p2.second) {
        return true;
    }
    return false;
}

int main(){
    vector<int> v1;
    vector<int> v2{10,20,30,40,50}; //size,

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);

    for(auto item:v2){
        cout<<item<<" ";
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<v1[i];
    }

    
    auto end=v1.end();
    auto start=v1.begin();
    //v1.erase(start);//delete
cout<<endl;
    for(auto it=start;it!=end;it++){
        cout<<*(it)<<" ";

    }
    
    //insert // prepend
    v1.insert(v1.begin(),200);
    cout<<endl;
    for(int i=0;i<6;i++){
        cout<<v1[i] <<" ";
    }

    //copy

     vector<int> copy(v2);
     cout<<endl;
        for(int i=0;i<5;i++){
        cout<<copy[i]<<" ";
    }

    //func
    cout<<"func"<<endl;
    cout<<v1.size()<<endl;
    v1.pop_back(); //remove last element
    v1.swap(v2); //swap vector
    v1.clear();//clear vector
    //v1.empty();


    //list

    list<int> ls;
    //fucn: ls.push_back(); exmplace_back(), push_front(); rest are same as vector


    //similar is deque
    //stack .top
    // similar is queue

    //priority_queue
    //priority que
    priority_queue<int,vector<int>,greater<int>> pq;

    //set order and unique 

//auto it= set1.finc(4)  return itersator
// set1.cont
//s1.erase(ad1,ad2) //need address to be deleted 

    multiset<int> mt1;
    //store order but not unqiue
    unordered_set<int> uno1;

    //map pair like dict 
    map<int,int> mp1;



    //algorithm
    //sort
    
    vector<int> l1{32,53,83,1,4,7,10};
    //sort(l1.begin(),l1.end()); for ascending
    //sort(l1.begin(),l1.end(), greater<int>());
    //; for descemnding

    //sort my way

    auto s=l1.begin();
    auto e=l1.end();
    // bool comp(vector<int> a1,vector<int> a2){
    //     //define ur fucn in true and false)

    // }

   // sort(s,e,comp);
    cout<<endl;
    for(auto it:l1){
        cout<<it<<" "<<endl;
    }

    cout<<"permutatation";

    string s1="ABC"; //start from sorted

    do{
        cout<<s1<<endl; //first perm. printred
    }while(next_permutation(s1.begin(),s1.end()));
    int maxi=*max_element(s,e);


cout<<endl;
int n=5;
pair<string,int> p1[n]={{"pj",183},{"sj",224},{"mj",22},{"kj",18},{"dj",43}};

sort(p1,p1+n,comp);

for(auto it:p1){
    cout<<it.first<<" "<<it.second<<" ";
}

}