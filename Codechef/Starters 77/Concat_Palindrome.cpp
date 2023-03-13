#include <bits/stdc++.h>
#include <vector>

using namespace std;
template <typename T>
class PriorityQueue {
public:
    // Constructor
    PriorityQueue() {}

    // Destructor
    ~PriorityQueue() {}

    // Add an element to the queue
    void push(T value);

    // Remove the top element from the queue
    void pop();

    // Get the top element from the queue
    T top() const;

    // Check if the queue is empty
    bool empty() const;

    // Get the size of the queue
    int size() const;

private:
    std::vector<T> data; // underlying vector to store elements

    // Heapify the subtree rooted at index i
    void heapify(int i);

    // Swap the elements at indices i and j
    void swap(int i, int j);
};

// Add an element to the queue
template <typename T>
void PriorityQueue<T>::push(T value) {
    // Add the new element to the end of the vector
    data.push_back(value);

    // Restore the heap property by moving the element up the tree
    int i = size() - 1;
    while (i > 0 && data[(i - 1) / 2] < data[i]) {
        swap(i, (i - 1) / 2);
        i = (i - 1) / 2;
    }
}

// Remove the top element from the queue
template <typename T>
void PriorityQueue<T>::pop() {
    if (empty()) {
        return;
    }

    // Replace the top element with the last element in the vector
    data[0] = data.back();
    data.pop_back();

    // Restore the heap property by moving the element down the tree
    heapify(0);
}

// Get the top element from the queue
template <typename T>
T PriorityQueue<T>::top() const {
    if (empty()) {
        throw std::out_of_range("PriorityQueue is empty");
    }
    return data[0];
}

// Check if the queue is empty
template <typename T>
bool PriorityQueue<T>::empty() const {
    return data.empty();
}

// Get the size of the queue
template <typename T>
int PriorityQueue<T>::size() const {
    return data.size();
}

// Heapify the subtree rooted at index i
template <typename T>
void PriorityQueue<T>::heapify(int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < size() && data[left] > data[largest]) {
        largest = left;
    }

    if (right < size() && data[right] > data[largest]) {
        largest = right;
    }

    if (largest != i) {
        swap(i, largest);
        heapify(largest);
    }
}

// Swap the elements at indices i and j
template <typename T>
void PriorityQueue<T>::swap(int i, int j) {
    T temp = data[i];
    data[i] = data[j];
    data[j] = temp;
}


int main() {
    PriorityQueue<pair<int, int>> pq;

    // Insert some elements into the queue
    pq.push({1, 2});
    pq.push({2, 1});
    pq.push({4, 2});
    pq.push({5, 1});

    // Print the top element in the queue
    std::cout << "Top element: " << pq.top().first << std::endl;

    // Remove the top element from the queue
    pq.pop();

    // Print the new top element in the queue
    std::cout << "Top element: " << pq.top().first << std::endl;

    // Insert some more elements into the queue
    pq.push({7, 5});
    pq.push({9, 0});

    // Print the size of the queue
    std::cout << "Size of queue: " << pq.size() << std::endl;

    // Extract and print all elements from the queue
    while (!pq.empty()) {
        std::cout << pq.top().first << " " << pq.top().second << " : ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

