#include <bits/stdc++.h>
// algorithms, containers, iterators and functions are part of the C++ Standard Template Library
int main() {
    // pairs - is a container that stores two heterogeneous objects as a single unit.
    // #include <utility> Required for std::pair.
    // a std::pair is a container that combines two values into a single unit. 
    // These two values can be of the same or different data types.
    // The two elements are stored in a specific order, referred to as first and second.
    std::pair <int,int> p(1, 2);  // or std::pair <int, int> p = {1, 2};
    std::cout << p.first << " " << p.second << std::endl;
    std::pair <int, std::pair <int, int>> p2 = {1, {12, 13}}; // nested pair
    std::cout << p2.first << " " << p2.second.first << " " << p2.second.second << std::endl;
    std::pair <int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}}; // instead of a datatype we can use pair to create an array of pairs
    std::cout << arr[0].first << " " << arr[0].second << std::endl;
    std::cout << arr[1].second << std::endl;
    std::cout << arr[2].first << std::endl;

    // vector - is dynamic array
    std::vector <int> v; // declaration of vector which is empty.
    //  Directly using v[0] = will give error as vector is empty.
    //  value does not insert a new element. Instead, it assigns a new value to an existing element at index 0. 
    //  This operation requires the vector to already have an element at that index. 
    //  here push_back and emplace_back are member functions used to insert an element at the end of the vector
    v.push_back(12); // or you can use v.emplace_back(12);
    v.insert(v.begin(), 10); // inserting 10 at the beginning, doesn't replace existing elements just shifts them
    v.insert(v.begin() + 1, 2, 30); // inserting 2 copies of 30 at index 1 and 2
    v.insert(v.end(), 15); // inserting 15 at the end
    //  emplace_back is generally faster than push_back because it constructs the object in place.
    v[0] = 20; // modifies the 10 added by v.insert in the beginning to 20.

    std::vector <int> v2(5); // declaration of vector of size 5 with all values initialized to 0, and you can still increase it size.
    // in v2 you can directly access each vector using its index, e.g., v2[0], v2[1], etc.
    v2[0] = 10000;     // initializing the first vector
    std::cout << v2[0] << std::endl;

    std::vector <int> v3(7, 100); // declaration of vector of size 5 with all values initialized to 100.
    std::vector <std::pair<int, int>> v4; // vector of pairs
    v4.push_back({1, 2});  // also you need to add {} for pairs in push_back and emplace_back does not need it.
    v4.emplace_back(3, 4);

    //accessing elements of vector of pairs
    std::vector <int>::iterator it = v3.begin(); // iterator pointing to the first element of the vector
    std::vector<std::pair<int, int>>::iterator it1 = v4.begin(); 
    it++;
    std::cout << *it << std::endl; // prints the second element of the vector v3
    for (std::vector<int>::iterator it = v3.begin(); it != v3.end(); it++) {
        std::cout << *it << " "; // prints all elements of the vector v3
    }
    // or
    std::cout << std::endl;
    for (auto wow = v3.begin(); wow != v3.end(); wow++) {
        std::cout << *wow << " ";
    }
    // or
    std::cout << std::endl;
    for (auto sexy : v3) {
        std::cout << sexy << " ";
    }
    std::cout << std::endl;

    // ERASE
    v3.erase(v3.begin() + 1); // erases the second element of the vector v3
    v3.erase(v3.begin(), v3.begin() + 2); // erases the first two elements of the vector v3
    v3.erase(v3.begin() + 2, v3.begin() + 4); // erases elements from index 2 (3rd element) to index 3 (4th element) (4 index is not included)

    // some functions
    std::cout << v3.size() << std::endl; // prints the size of the vector v3
    std::cout << v3.empty() << std::endl; // checks if the vector v3 is empty
    v3.pop_back(); // removes the last element from the vector v3
    v3.clear(); // removes all elements from the vector v3

    // List - second container which is a doubly linked list. Each element is stored separately on the heap, connected by pointers.
    /* std::list is a doubly linked list:Each element is a separate node on the heap.Each node has:
    1. The value
    2. A pointer to the previous node
    3. A pointer to the next node*/
    std::list<int> l;
    l.push_back(10); //{10}
    l.emplace_back(20); //{10, 20}
    l.push_front(30); //{30, 10, 20}
    for (auto sexy : l) {
        std::cout << sexy << " ";
    }
    std::cout << std::endl;
 
    // deque - third container which is a double-ended queue. means you can add or remove elements from both ends.  
    // std::deque (double-ended queue) is a sequence container that allows fast insertion and deletion of elements at both its beginning and end.
    std::deque<int> d;
    d.push_back(10);
    d.push_front(20);
    for (auto sexy : d) {
        std::cout << sexy << " ";
    }
    std::cout << std::endl;

    /*Vector (one big block):
    [ 1 ][ 2 ][ 3 ][ 4 ][ 5 ]
    Deque (multiple blocks):
    Block0: [ 1 ][ 2 ]
    Block1: [ 3 ][ 4 ]
    Block2: [ 5 ]
    List (pointers everywhere):
    [1]<->[2]<->[3]<->[4]<->[5]*/

    // stack - fourth container which is a LIFO data structure. (last in first out)
    std::stack<int> st;
    st.push(10); //{10}
    st.push(20); //{10, 20}
    st.push(30); //{10, 20, 30}
    st.push(40); //{10, 20, 30, 40}
    std::cout << st.top() << std::endl; // prints the top element of the stack (40)
    st.pop(); // removes the top element of the stack (40)
    std::cout << st.top() << std::endl; // prints the top element of the stack (30)
    st.pop(); // removes the top element of the stack (30)
    std::cout << st.size() << std::endl; // prints the size of the stack (2)

    // queue - fifth container which is a FIFO data structure. (first in first out)
    std::queue<int> q;
    q.push(10); //{10}
    q.push(20); //{10, 20}
    q.push(30); //{10, 20, 30}
    q.push(40); //{10, 20, 30, 40}
    std::cout << q.front() << std::endl; // prints the front element of the queue (10)
    q.pop(); // removes the front element of the queue (10)
    std::cout << q.front() << std::endl; // prints the front element of the queue (20)
    std::cout << q.size() << std::endl; // prints the size of the queue (3)
    std::cout << q.back() << std::endl; // prints the back element of the queue (40)

    // priority_queue - sixth container which is a special type of queue where the highest (or lowest) priority element is served before other elements.
    std::priority_queue<int> pq; // max heap
    pq.push(10); //{10}
    pq.push(20); //{20, 10}
    pq.push(30); //{30, 20, 10}
    pq.push(5); //{30, 20, 10, 5}
    std::cout << pq.top() << std::endl; // prints the top element of the priority queue (30)
    pq.pop(); // removes the top element of the priority queue (30)
    std::cout << pq.top() << std::endl; // prints the top element of the priority queue (20)
    std::cout << pq.size() << std::endl; // prints the size of the priority queue (3)

    std::priority_queue<int, std::vector<int>, std::greater<int>> pqmin; // min heap
    pqmin.push(10); //{10}
    pqmin.push(20); //{10, 20}
    pqmin.push(5); //{5, 20, 10}
    std::cout << pqmin.top() << std::endl; // prints the top element of the min heap priority queue (5)
    pqmin.pop();     // removes the top element of the min heap priority queue (5)

    //set - seventh container which is a collection of unique elements stored in sorted order.  
    std::set<int> s;
    s.insert(10); //{10}
    s.insert(20); //{10, 20}
    s.insert(5); //{5, 10, 20}
    s.insert(10); //{5, 10, 20} (10 is already present, so it won't be added again)
    s.erase(5); //{10, 20} (removes 5 from the set)
    int cnt = s.count(10); // cnt = 1 (10 is present in the set)

    //multiset - eighth container which is similar to set but allows duplicate elements.
    std::multiset<int> ms;
    ms.insert(10); //{10}
    ms.insert(20); //{10, 20}
    ms.insert(5); //{5, 10, 20}
    ms.insert(10); //{5, 10, 10, 20}
    ms.erase(10); //{5, 20} (removes all occurrences of 10 from the multiset)
    ms.insert(10); //{5, 10, 20}
    ms.insert(10); //{5, 10, 10, 20}
    int cnt2 = ms.count(10); // cnt2 = 2 (10 is present twice in the multiset)

    //map - ninth container which is a collection of key-value pairs, where each key is unique and maps to a specific value.
    std::map<int, int> m;
    m[1] = 100; //{1: 100}
    m[2] = 200; //{1: 100, 2: 200}
    m[3] = 300; //{1: 100, 2: 200, 3: 300}
    m[1] = 400; //{1: 400, 2: 200, 3: 300}  (1 is already present, so its value is updated to 400)
    m.insert({4, 500}); //{1: 400, 2: 200, 3: 300, 4: 500}  or m.emplace({4,500});
    m.erase(2); //{1: 400, 3: 300, 4: 500}
    for (auto sexy : m) {               
        std::cout << sexy.first << " " << sexy.second << std::endl; // prints all key-value pairs in the map
    }
    std::cout << m[3] << std::endl; // prints the value associated with key 3 (300)
    std::cout << m.size() << std::endl; // prints the size of the map (3)
    std::cout << m.count(1) << std::endl; // checks if key 1 is present in the map (1 if present, 0 if not) 

    //unordered_map - tenth container which is similar to map but does not store elements in sorted order and allows for faster access using hashing.
    std::unordered_map<int, int> um;
    um[1] = 100; //{1: 100}     
    um[2] = 200; //{1: 100, 2: 200}
    um[3] = 300; //{1: 100, 2: 200, 3: 300}
    um[1] = 400; //{    1: 400, 2: 200, 3: 300}  (1 is already present, so its value is updated to 400)
    um.insert({4, 500}); //{1: 400, 2: 200, 3: 300, 4: 500}  or um.emplace({4,500});
    um.erase(2); //{1: 400, 3: 300, 4: 500}

    //multimap - eleventh container which is similar to map but allows multiple values for the same key.

    // now for algorithms
    int a[] = {4, 3, 2, 1};
    std::sort(a, a+4); // sorts an array of size 4      sort(a.begin(), a.end()); for vector
    for (int i = 0; i < 4; i++) {
        std::cout << a[i] << " "; // prints the sorted array
    }
    std::sort(a+2, a+4); // sorts the array from index 2 to 3
    std::sort(a, a+4, std::greater<int>()); // sorts the array in descending order
    std::reverse(a, a+4); // reverses the array
    //end
}