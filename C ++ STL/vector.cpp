#include<bits/stdc++.h>
using namespace std;    
// we can increase size dynamically
int main(){

    vector<int> v;   // {1,2,3,4}

    v.push_back(1); 
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    // vector<int> v(5, 100); // {100, 100, 100, 100, 100}

    // vector<int> v(5);// {0, 0, 0, 0, 0}

    vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    vector<int> v2(v1); //copy v1 data to v2 


    vector<int>::iterator it = v.begin();
    it++;
    // cout<< *(it)<< " ";


    vector<int>::iterator it1 = v.end();
    it1--;
    // cout<< *(it1)<< " ";


    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        // cout<< *(it)<< " ";
    }
    
    for (auto it = v.begin(); it != v.end(); it++)
    {
    //    cout<< *(it) << " ";
    }
    
    for (auto hello: v)
    {
        // cout<< hello << " ";
    }
    
    // if you want to erase any address value   // {1,2,3,4}
    
    v.erase(v.begin() + 1);   // {1,2,3,4}
    for (auto i: v)
    {
        // cout<< i << " ";
    }
    
    vector<int> vec1;
    vec1.emplace_back(10); 
    vec1.emplace_back(20);
    vec1.emplace_back(30);
    vec1.emplace_back(40);
    vec1.emplace_back(50); 
    vec1.emplace_back(60);
    vec1.emplace_back(70);
    vec1.emplace_back(80);

// {10, 20, 30, 40, 50, 60, 70, 80}
    for (auto i: vec1)
    {
    //    cout << i << " ";
    }
    cout<< endl;

    vec1.erase(vec1.begin() + 1, vec1.begin()+ 4);

    for (auto i: vec1)
    {
        // cout << i << " ";
    }
    

    // insert 
    vector<int> n(2, 100);
    n.insert(n.begin(), 300);
    n.insert(n.begin() + 1, 5,10 );

    for (auto i: n)
    {
        // cout<< i << " ";
    }
    cout<< endl;

    vector<int> copy(2,50);
    n.insert(n.end(), copy.begin(), copy.end());

     for (auto i: n)
    {
        // cout<< i << " ";
    }

    cout<< n.size() << endl;
    n.pop_back();

  for (auto i: n)
    {
        // cout<< i << " ";
    }

        cout<< n.size() << endl;


// v1 -> {10, 20}
//  v2 -> {30, 40}

// v1.swap(v2);  v1-> {30, 40} , v2-> {10,20}
        n.clear();

        cout << n.size() << endl;

        cout<< n.empty();  // 1-> false, 0-> true

    return 0;
}