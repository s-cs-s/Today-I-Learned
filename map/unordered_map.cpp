// TIL UOM are initialized by 0 by default !!!
//and they need unordered_map library inclusion which isn't in bits/stdc++ ?
//after including lib vscode start giving autocomplete !!
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<int,int> m;
    m[10]++;
    if(m.find(10)!=m.end()){
        cout<<m[10]<<endl;
    }
}

