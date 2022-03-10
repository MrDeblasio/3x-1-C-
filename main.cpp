#include <iostream>
#include <cmath>
using namespace std;

class Functions
{
public:
static bool IsEven(int number)
{
	if (number % 2 == 0)
	{
		return true;
	} else {
		return false;
	}
}
};

int main(int argc, char **argv) {
	int x;
	cin >> x;
	int tries = 0;
	
	while (true)
		{
			if (Functions::IsEven(x))
			{
				int y = x / 2;
				x = y;
			}
			else
			{
				x = x * 3;
				x++;
			}
			tries++;
			cout << x << endl;

			if (x == 1)
			{
				cout << "Done in " << tries << " tries.";
				break;
			} else if (x <= 0)
			{
				break;
			}
		}
}
