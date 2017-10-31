void Add(int* lhs, int* rhs,int *answer);
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int b[] = { 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 };
	int* c = new int[16];
	Add(a,b,c);
}
void Add(int* lhs, int* rhs, int *answer)
{
	for (int i = 0; i < 16; i++)
		answer[i] = lhs[i] + rhs[i];
}