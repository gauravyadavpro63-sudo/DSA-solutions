// Yes, Kaneki. Let's do it properly this time. 😭🤝

// I'm going to explain only the code you pasted first. I won't introduce the actual LRU implementation until we understand what every line of this template means.

// Your code:

// class LRUCache {  
// public:  
//     LRUCache(int capacity) {  
          
//     }  
      
//     int get(int key) {  
          
//     }  
      
//     void put(int key, int value) {  
          
//     }  
// };  

// Think of this as a blueprint that LeetCode gives you. Your job is to fill in the empty functions.

// 1. class LRUCache
// class LRUCache {

// class is a C++ keyword used to create a user-defined type.

// For example:

// class Student {
// };

// creates a type called Student.

// Similarly:

// class LRUCache {
// };

// creates a type called LRUCache.

// So LRUCache is not an object yet.

// It is the type/blueprint from which objects can be created.

// Think:

// class LRUCache
//        ↓
//    blueprint


//        ↓ create object


// LRUCache object
// 2. public:
// public:

// This controls access to the things below it.

// C++ classes have access levels such as:

// public
// private
// protected

// Here LeetCode gives you:

// public:

// because get() and put() need to be callable from outside the class.

// For example, LeetCode needs to be able to do:

// obj->get(key);

// and:

// obj->put(key, value);

// If those functions were private, outside code couldn't directly call them.

// So:

// public:

// basically means:

// "The functions below this can be accessed from outside the class."

// 3. This is the constructor
// LRUCache(int capacity) {
    
// }

// This is a constructor.

// How do we know?

// Because its name is exactly the same as the class:

// Class name:      LRUCache
// Constructor:     LRUCache(...)

// A constructor is automatically called when an object of the class is created.

// What is capacity?

// Look at:

// LRUCache(int capacity)

// There are two things here:

// LRUCache       → constructor name
// int capacity   → parameter

// capacity tells our cache how many key-value pairs it is allowed to store.

// For example, if:

// capacity = 2

// the cache can contain at most:

// 2 keys

// If:

// capacity = 5

// it can contain at most:

// 5 keys

// The problem says capacity will always be positive.

// 4. Why is the constructor empty?

// You currently have:

// LRUCache(int capacity) {


// }

// It's empty because you have to implement it.

// The constructor will eventually be responsible for initializing the cache's internal data.

// For example, eventually we'll need to remember:

// capacity

// and create our data structures.

// But right now LeetCode has simply given you an empty place to do that.

// 5. Now int get(int key)
// int get(int key) {
    
// }

// This is a member function of the LRUCache class.

// Let's break it apart:

// int       get       (int key)
//  ↑          ↑           ↑
// return    function    parameter
// type       name
// int

// The function must return an integer.

// get

// The function's name is get.

// int key

// The function accepts one integer called key.

// So when LeetCode calls:

// get(10)

// the value:

// 10

// gets placed into:

// key

// Inside the function, key is therefore:

// key = 10
// 6. What is get() supposed to do?

// The problem says:

// Return the value of the key if the key exists, otherwise return -1.

// Suppose the cache contains:

// key    value
// 10     500
// 20     700

// If:

// get(10)

// is called, we return:

// 500

// If:

// get(99)

// is called and 99 doesn't exist:

// -1

// So conceptually:

// get(key)
//     ↓
// Does key exist?
//     ↓
//  YES → return its value
//  NO  → return -1

// But there's an important LRU part:

// If the key exists and we access it, that key becomes recently used.

// So get() doesn't merely retrieve the value.

// It also affects the LRU order.

// 7. Now void put(int key, int value)
// void put(int key, int value) {
    
// }

// Again, break it down:

// void       put       (int key, int value)
//  ↑          ↑              ↑
// return    function       parameters
// type       name
// void

// This function returns nothing.

// put

// The function's name is put.

// Parameters

// It takes two integers:

// int key
// int value

// So:

// key → identifies the item
// value → data associated with that key

// Conceptually, put means:

// "Store this key-value pair in the cache."

// 8. What happens when put() is called?

// There are three important situations.

// Situation 1 — Key doesn't exist

// We want to add it.

// put(key, value)
//        ↓
// key doesn't exist
//        ↓
// insert it
// Situation 2 — Key already exists

// We don't create another copy.

// Instead:

// old value
//    ↓
// update value

// For example:

// 10 → 500

// Then:

// put(10, 900)

// becomes:

// 10 → 900

// And because we just used/updated key 10, it becomes most recently used.

// Situation 3 — Cache becomes too large

// Suppose capacity is:

// 2

// and we already have two keys.

// Then we add another key.

// Now we'd have:

// 3 keys

// but capacity is only:

// 2

// So we must remove the:

// Least Recently Used key

// That's the actual LRU part.

// 9. Now the comment below the class

// This part is extremely important:

// /**
//  * Your LRUCache object will be instantiated and called as such:
//  * LRUCache* obj = new LRUCache(capacity);
//  * int param_1 = obj->get(key);
//  * obj->put(key,value);
//  */

// This is LeetCode telling you how its test system will use your class.

// You don't need to implement those lines.

// They're showing you something like:

// LeetCode's code
//       ↓
// creates your LRUCache object
//       ↓
// calls get()
//       ↓
// calls put()
//       ↓
// checks your results

// Let's understand each line.

// 10. LRUCache* obj
// LRUCache* obj

// This means:

// obj is a pointer to an LRUCache object.

// The * here means pointer.

// You don't need to think of the pointer as the cache itself.

// Think:

// obj
//  ↓
// address/location of an LRUCache object
// 11. new LRUCache(capacity)

// The complete line is:

// LRUCache* obj = new LRUCache(capacity);

// There are several things happening.

// First:

// new LRUCache(capacity)

// creates an LRUCache object.

// While creating it, C++ calls:

// LRUCache(int capacity)

// the constructor you saw above.

// So:

// new LRUCache(capacity)
//           ↓
// constructor gets called
//           ↓
// LRUCache(int capacity)

// Then the resulting object's address is stored in:

// obj

// So conceptually:

//               LRUCache object
//                     ↑
//                     |
// obj ────────────────┘
// 12. Why is capacity there?

// Because LeetCode will give your cache a capacity.

// For example, conceptually, their test might create:

// capacity = 2

// Then:

// new LRUCache(capacity)

// becomes:

// new LRUCache(2)

// which calls:

// LRUCache(2)

// Therefore inside the constructor:

// LRUCache(int capacity)

// the parameter contains:

// capacity = 2

// Your constructor needs to store that information so the cache knows its maximum size.

// 13. Now this line
// int param_1 = obj->get(key);

// LeetCode calls your:

// get()

// function.

// Suppose:

// key = 10

// Then:

// obj->get(key)

// means:

// obj->get(10)

// Your get() function should return an integer.

// That's why LeetCode writes:

// int param_1 =

// because it wants to store the returned value.

// For example:

// get(10)
//    ↓
// 500
//    ↓
// param_1 = 500
// 14. What does -> mean?

// This is an important C++ concept.

// LeetCode has:

// LRUCache* obj

// Notice:

// *

// obj is a pointer.

// When accessing a member through a pointer, we use:

// ->

// Therefore:

// obj->get(key)

// means:

// Call the get() function of the object pointed to by obj.

// If you had a normal object instead of a pointer, you'd use:

// .

// So:

// object.function()

// versus:

// pointer->function()

// That's why LeetCode uses:

// obj->get(key);
// obj->put(key, value);
// 15. Finally
// obj->put(key,value);

// LeetCode calls your put() function.

// Suppose:

// key = 10
// value = 500

// Then it becomes conceptually:

// obj->put(10, 500);

// Your function receives:

// int key = 10;
// int value = 500;

// and your implementation must store/update that pair.

// 16. The whole interaction

// This is the most important picture:

//               LeetCode
//                  |
//                  | creates
//                  ↓
//        LRUCache object
//                  |
//                  | constructor
//                  ↓
//        LRUCache(capacity)
//                  |
//                  |
//        ┌─────────┴─────────┐
//        ↓                   ↓
//     get(key)           put(key,value)
//        ↓                   ↓
//   find value          insert/update
//        ↓                   ↓
//  return value       maintain LRU

// Your class is basically providing an interface to LeetCode:

//                     LRUCache
//                        |
//              ┌─────────┼─────────┐
//              ↓         ↓         ↓
//         constructor   get()    put()
//              ↓         ↓         ↓
//         initialize   retrieve   modify
//         the cache    value      cache
// And notice something crucial

// None of these are yet in your code:

// unordered_map
// Node
// doubly linked list
// head
// tail
// capacity variable

// Those are things we will add ourselves to actually implement the LRU behavior.

// Your provided code is only the interface/skeleton:

// class LRUCache {
// public:


//     // Initialize cache
//     LRUCache(int capacity) {
//     }


//     // Retrieve something
//     int get(int key) {
//     }


//     // Insert/update something
//     void put(int key, int value) {
//     }
// };

// So don't try to understand the unordered_map + doubly linked list yet.

// First lock this into your head:

// Constructor → creates/initializes the cache

// get(key) → asks the cache for a value

// put(key,value) → tells the cache to store/update a value

// LeetCode's comment → shows how their test code calls those functions

// Then the next layer is: "Okay, what variables/data structures do WE need 
// inside this class to make those three functions actually work in O(1)?" 
// That's where unordered_map + doubly linked list comes in.