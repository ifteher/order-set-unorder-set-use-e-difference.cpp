///Order set/PBDS(policy Based Data Structure)
///In set:
//The value of N th position: O(n)
//The position of a particular value: O(n)
///In Order set:
//*find_by_order(by giving position) = O(log(n))
//order_of_key(by giving value) = O(log(n))

#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>//very important,attach in format.
#include<ext/pb_ds/tree_policy.hpp>    //very important,attach in format.
using namespace __gnu_pbds;              //very important,attach in format.
#define os tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> //very important,attach in format.(less er jaigai "less equal"dile multiset er moto kore use hobe.
int main()
{
    os st;
    st.insert(3);
    st.insert(13);
    st.insert(5);
    st.insert(30);
    st.insert(7);
    st.insert(70);
    cout<<"Find the value of a specific index:"<<endl;
    cout<<*st.find_by_order(3)<<endl;
    cout<<"check a value's position by giving value:"<<endl;
    cout<<st.order_of_key(7)<<endl;//ekhane value te emon kono value jeta set e nai emonta dile o ta takle zero index bibechonay kothai takto,seta show korbe.
 return 0;
}
///Example:
/*
Find the value of a specific index:
13(3th index)
check a value's position by giving value:
2(pos of 7 value)
*/
///a concise comparison between set and ordered_set in C++ STL:
/*For ordered_set, you typically use PBDS (Policy-Based Data Structures).

Feature: 	       set	                                          ordered_set (using set with order)
Ordering	       Elements are stored in sorted order.	          Does not exist natively in STL (use external libraries like pbds for order statistics).
Duplicates	     No duplicates allowed.	                        Same as set,no duplicates allowed.
Access	         O(log n) for insertion, deletion, and search.	Same time complexity as set, but allows order-based access.
Order Statistic  Not supported in set.	                        Supported in ordered_set(e.g., find element by index).
Use Case	       When only uniqueness and ordering are needed.	When ordering and index-based access are needed.
*/

