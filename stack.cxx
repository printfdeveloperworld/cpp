#include<iostream>
#include<cstring>
#include<stack>
#include<chrono>
using namespace std;
typedef unsigned long long ull;
namespace MyStack
{
	template<class T>
	class   stack
	{
		T* elems;
		ull sz;
		ull tos;

	public:

		stack()
		{
			sz = 10000;
			elems = new T[sz];
			tos = 0;
		}
		bool push(T t)
		{
			if (tos + 1 == sz)
			{

				resize(10000);
				elems[tos] = t;
				tos++;
				return true;
			}

			if (tos == -1) tos++;

			elems[tos] = t;
			tos++;

			return true;
		}
		bool pop()
		{
			if (tos == -1)
			{
				cout << "stack underflow" << endl;
				return false;
			}
			//cout << "pop:" << elems[tos] << endl;

			tos--;
			return true;

		}
		T top()
		{

			return elems[tos - 1];
			elems = nullptr;
		}

		int size()
		{
			return tos;
		}
		void print()
		{
			ull	 k = 0;
			for (ull i = 0; i < size(); i++)
			{
				cout << elems[i] << " ";
				k++;
			}
			cout << endl;
			cout << "total elements:" << k << endl;
			cout << "actual size :" << size() << endl;
		}
		void resize(int size)
		{

			T *el = new T[sz + size];
			memcpy(el, elems, sizeof(T)*tos);
			sz += size;
			delete[] elems;
			elems = el;
		}
		~stack()
		{
			delete[] elems;
		}

		void destroy()
		{
			delete[] elems;
			sz = 100;
			elems = new T[sz];
			tos = 0;

		}

		bool isEmpty()
		{
			if (tos == -1) return true;

			return false;
		}
	};

}

// driver program
int main()
{

	auto start = std::chrono::steady_clock::now();
	MyStack::stack<int> st;
	for (int i = 1; i <= 99; i++)
	{
		st.push(i);
	}
	cout << st.top() << endl;
	cout << st.size() << endl;
	st.push(100);
	st.push(101);
	st.push(102);
	for (int i = 103; i <= 20000; i++)
	{
		st.push(i);
	}
	//st.print();

	cout << st.top() << endl;
	cout << st.size() << endl;

	st.pop();
	//st.print();
	cout << st.size() << endl;
	cout << st.size() << endl;

	while (!st.isEmpty())
	{
		st.pop();
	}
	st.push(10);
	cout << st.size() << endl;
	cout << st.top() << endl;
	//st.print();
	st.destroy();

	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";



	cout <<"=============std stack=====================" << endl;
	auto start1 = std::chrono::steady_clock::now();
	std::stack<int> stdst;
	for (int i = 1; i <= 99; i++)
	{
		stdst.push(i);
	}
	cout << stdst.top() << endl;
	cout << stdst.size() << endl;
	stdst.push(100);
	stdst.push(101);
	stdst.push(102);
	for (int i = 103; i <= 20000; i++)
	{
		stdst.push(i);
	}
	 

	cout << stdst.top() << endl;
	cout << stdst.size() << endl;

	stdst.pop();
	 
	cout << stdst.size() << endl;
	cout << stdst.size() << endl;

	while (!stdst.empty())
	{
		stdst.pop();
	}
	stdst.push(10);
	cout << stdst.size() << endl;
	cout << stdst.top() << endl;
	auto end1 = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds1 = end1 - start1;
	std::cout << "elapsed time: " << elapsed_seconds1.count() << "s\n";

	 
 

	 
}