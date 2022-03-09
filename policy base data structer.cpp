#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> pbds;

int main(){
	pbds A;
A.insert(11);
A.insert(5);
A.insert(3);
A.insert(7);
A.insert(9);
cout<<"3,5,7,9,11"<<endl;
//kth smallest number
int k=2;
cout<<k<<"rd smallest:"<<*A.find_by_order(k-1)<<endl;
// number of less than x element
int x=9;
cout<<"no of less than x"<<x<<"are"<<A.order_of_key(x)<<endl;

//delete elements
cout<<"delete 3"<<endl;
A.erase(3);
// next greater element than x
cout<<"next greter element than x"<<x<<*A.upper_bound(x)<<endl;

}
