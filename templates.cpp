/*
class Pair{
	int x;
	int y;

public:
	void setX(int x){
		this -> x = x;
	}

	int getX(){
		return x;
	}

	void setY(int y){
		this -> y = y;
	}

	int getY(){
		return y;
	}

};

class PairDouble{
	double x;
	double y;

public:
	void setX(double x){
		this -> x = x;
	}

	double getX(){
		return x;
	}

	void setY(double y){
		this -> y = y;
	}

	double getY(){
		return y;
	}
};
*/

template <typename T, typename V>

class Pair{
	T x;
	V y;
public:
	void setX(T x){
		this -> x = x;
	}

	T getX(){
		return x;
	}

	void setY(V y){
		this -> y = y;
	}

	V getY(){
		return y;
	}

};


template <typename T>

class Tuple{
	T x;
	T y;

public:
	void setX(T x){
		this -> x = x;
	}

	void setY(T y){
		this -> y = y;
	}

	T getX(){
		return x;
	}

	T getY(){
		return y;
	}

	void print(){
		cout << "(" << x << "," << y << ")" << "\n";
	}

};


