int* checkStack()
{
	int stack=10;
	return &stack;
}
int* checkHeap()
{
	int *heapVar = new int;
	*heapVar = 10;
	return heapVar;
}

int main()
{
	int *st = checkStack();
	int *heap = checkHeap();
	delete heap;
	heap = nullptr;


return 0;
}

