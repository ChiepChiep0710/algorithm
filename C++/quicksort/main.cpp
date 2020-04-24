#include <iostream>

using namespace std;
void quickSort(int Data[], int l , int r)
{
	// If the first index less or equal than the last index
	if (l <= r)
	{
		// Create a Key/Pivot Element
		int key = Data[(l+r)/2];

		// Create temp Variables to loop through array
		int i = l;
		int j = r;

		while (i <= j)
		{
			while (Data[i] < key)
				i++;
			while (Data[j] > key)
				j--;

			if (i <= j)
			{
				swap(Data[i], Data[j]);
				i++;
				j--;
			}
		}

		// Recursion to the smaller partition in the array after sorted above
		// Reference Giải Thuật Đệ Quy :: STDIO.VN
		if (l < j)
			quickSort(Data, l, j);
		if (r > i)
			quickSort(Data,2 i, r);
	}
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
