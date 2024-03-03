#include<climits>

template <typename T>

class StackUsingArray{
private:
	T* data;
	int nextIndex;
	int capacity;

public:
	// Constructor
	StackUsingArray(){
		data = new T[4];
		nextIndex = 0;
		capacity = 4;
	}

	// returns the number of elements in the Stack
	const int size(){
		return nextIndex;
	}

	// returns a boolean, true if Stack is empty, false otherwise
	const bool isEmpty(){
		return nextIndex == 0;
	}

	// prints and returns the top element in the Stack
	// if Stack is empty, it returns 0 and prints "Invalid Query"
	const T top(){
		if(!isEmpty()){
			cout << "Top : " << data[nextIndex-1] << "\n";
			return data[nextIndex-1];
		}
		cout << "Invalid Query - Stack Empty\n";
		return 0;
	}

	// push num to the top of the Stack
	// and move the Stack top to nextIndex
	void push(T num){
		if(nextIndex == capacity){
			/*
			cout << "Stack is Full\n";
			return ;
			*/
			T* newData = new T[2 * capacity];
			for(int i=0;i<capacity;i++){
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;			
			data = newData;
		}
		data[nextIndex] = num;
		nextIndex += 1;
	}

	// print the Stack top and decrement 
	// the value of nextIndex
	T pop(){
		if(isEmpty()){
			cout << "Stack Empty\n";
			return 0;
		} else{
			// cout << "Delete : " << data[nextIndex-1] << "\n";
			nextIndex -= 1;
			return data[nextIndex];
		}
	}
};


