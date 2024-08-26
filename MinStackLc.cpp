// here the information is given in the question is 
// we have to performs operations in stack in constant time complexity o(1);

// vector<pair<int,int>>st;
//     void push(int val){
//         if(st.empty()){
//             pair<int,int> p=make_pair(val,val);
//             st.push_back(p);
//         }
//         else{
//             pair<int,int>p;
//             st.back().first=val;
//             st.back().second(val,min(st.back().second));
//             st.push_back(p);
//         }
//     }
//     void pop() {
//         st.pop_back();
//     }
    
//     int top() {
//         return st.back().first;
//     }
    
//     int getMin() {
//         return st.back().second;
//     }

